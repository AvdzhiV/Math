#include "../s21_math.h"

long double s21_atan(double x) {
  int znak = 0, invertation = 0, step = 0;
  long double res = 0, x_square = x * x;
  if (x != x) {
    res = -S21_NAN;
  } else if (x == S21_INF) {
    res = S21_PI_2;
  } else if (x == S21_MIN_INF) {
    res = -S21_PI_2;
  } else {
    if (x < 0.) {
      x *= -1;
      znak++;
    }
    if (x > 1.) {
      x = 1. / x;
      invertation++;
    }
    while (x > S21_PI_12) {
      step++;
      res = 1. / (x + s21_sqrt(3));
      x = (x * s21_sqrt(3) - 1) * res;
    }
    x_square = x * x;
    res = x_square + 1.4087812F;
    res = 0.55913709F / res;
    res += 0.60310579F;
    res -= 0.05160454F * x_square;
    res *= x;
    while (step > 0) {
      res += S21_PI_6;
      step--;
    }
    if (invertation) res = S21_PI_2 - res;
    if (znak) res *= -1;
  }
  return res;
}
