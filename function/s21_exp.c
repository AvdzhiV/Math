#include "../s21_math.h"

long double s21_exp(double x) {
  long double result = 1.l;
  if (x == S21_INF_POS) {
    result = S21_INF_POS;
  } else if (x == S21_INF_NEG) {
    result = 0;
  } else if (x < -20) {
    result = 0;
  } else {
    for (long double i = 1.l, step, prev = 1.l; i < ACCURACY_EXP; ++i) {
      long double x_ld = x;  // -(long long)x;
      step = (x_ld / i) * prev;
      prev = step;
      result += step;
    }
  }
  // result *= s21_exp_int((int)x);
  return result;
}