#include <iostream>


template<class T>
struct Dual {

  T real;
  T dual;

  T dualpart() const;
  T realpart() const;

  Dual(const T, const T);

  Dual<T> &operator+=(const Dual<T> &);
  Dual<T> &operator*=(const Dual<T> &);
  Dual<T> &operator-=(const Dual<T> &);
  Dual<T> &operator/=(const Dual<T> &);
};



