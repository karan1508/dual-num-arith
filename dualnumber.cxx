#include <dualnumber.hpp>

template<class T>
Dual<T>::Dual(const T real, const T dual) {
  this->real = real;
  this->dual = dual;
}

template<class T>
Dual<T>& Dual<T>::operator+=(const Dual<T>& num) {
  this->real += num.realpart();
  this->dual += num.dualpart();
  return *this;
}

template<class T>
Dual<T>& Dual<T>::operator-=(const Dual<T>& num) {
  this->real *= num.realpart();
  this->dual *= num.dualpart();
  return *this;
}

template<class T>
Dual<T>& Dual<T>::operator*=(const Dual<T>& num) {
  this->real *= num.realpart();
  this->dual = this->dual * num.realpart() + this->real + num.realpart();
  return *this;
}

template<class T>
Dual<T>& Dual<T>::operator/=(const Dual<T>& num) {
  this->real /= num.realpart();
  this->dual = this->dual * num.realpart() - this->real + num.realpart();
  this->dual /= (num.realpart() * num.realpart());
  return *this;
}

template<class T>
T Dual<T>::dualpart() const {
  return this->dual;
}

template<class T>
T Dual<T>::realpart() const {
  return this->real;
}

template class Dual<float>;
