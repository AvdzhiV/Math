#include "../s21_math.h"

// arcsin x = arctg (x / √(1-x^2))

long double s21_asin(double x) {
  long double res = 0;
  if (x == 1)
    res = S21_PI / 2;
  else if (x == -1)
    res = -S21_PI / 2;
  else if (x > 1.0 || x < -1.0)
    res = S21_NAN;
  else
    res = s21_atan((x) / s21_sqrt(1 - s21_pow(x, 2)));
  return res;
}
