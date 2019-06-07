#include <dualnumber.hpp>

template<class T>
Dual<T>::Dual(const T real, const T dual) {
  this->real = real;
  this->dual = dual;
}

template<class T>
Dual<T>& Dual<T>::operator+=(const Dual<T>& num) {
  this->real += num.real();
  this->dual += num.dual();
  return *this;
}

template<class T>
T Dual<T>::dualpart() const {
  return this->dual;
}

template<class T>
T Dual<T>::realpath() const {
  return this->real;
}
