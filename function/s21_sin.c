#include "../s21_math.h"

long double s21_sin(double x) {
  if (x < 0) {
    return -1.0 * s21_sin(-1.0 * x);
  }
  if (x > 2 * S21_PI) {
    x = s21_fmod(x, 2 * S21_PI);
  }
  long double result = 0.0;
  long double term = x;
  int i = 1;
  while (s21_fabs((double)term) > S21_EPS) {
    result += term;
    term *= -1 * x * x / ((2 * i) * (2 * i + 1));
    i++;
  }
  return result;
}