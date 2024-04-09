#include "../s21_math.h"

// arcsin x + arccos x = Pi/2

long double s21_acos(double x) {
  long double res = 0;
  if (x == 1)
    res = 0.0;
  else if (x == -1)
    res = S21_PI;
  else if (x > 1.0 || x < -1.0)
    res = S21_NAN;
  else
    res = S21_PI / 2 - s21_asin(x);
  return res;
}
