#include "../s21_math.h"

long double s21_fmod(double x, double y) {
  unsigned long long int res = 0;
  long double mem = x;

  if (y == 0) x = S21_NAN;
  if (x == x && y == y) {
    x = s21_fabs(x);
    y = s21_fabs(y);
    res = x / y;
    x = x - res * y;
    x = mem < 0 ? -x : x;
  }
  return y != y ? S21_NAN : x;
}