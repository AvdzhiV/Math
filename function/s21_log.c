#include "../s21_math.h"
#include "stdbool.h"

long double mcloren_ln(double x) {
  long double x_ld = x - 1;
  long double result = x - 1;
  bool is_minus = true;
  for (long double i = 2.l, step, prev = result; i < ACCURACY_LN; ++i) {
    step = x_ld * prev;
    prev = step;
    is_minus ? (result -= step / i) : (result += step / i);
    is_minus = !is_minus;
  }
  return result;
}

long double s21_log(double x) {
  if (x <= 0) return S21_NAN;
  long double res = 0;
  while (x > 2) {
    x /= 2;
    res += LN_2;
  }
  if (x > 0.01)
    res += mcloren_ln(x);
  else {
    long double pow = -1.l;
    x *= 10.l;
    while (x < 0.1l) {
      x *= 10.l;
      --pow;
    }
    res += pow * LN_10;
    res += mcloren_ln(x);
  }
  return res;
}