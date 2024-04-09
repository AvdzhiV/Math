#include "../s21_math.h"

long double s21_sqrt(double x) {
  long double res = 0;
  if (x < 0) {
    return -S21_NAN;
  } else {
    long double left = 0;
    long double right = 1;
    if (x > 1) {
      right = x;
    }
    long double mid = x / 2;
    long double mid_2 = mid * mid;
    int flag = 1;
    while ((right - left) > S21_EPS && flag) {
      mid = (left + right) / 2;
      mid_2 = mid * mid;
      if (mid_2 == x) {
        flag = 0;
      } else if (mid_2 > x) {
        right = mid;
      } else {
        left = mid;
      }
    }
    res = mid;
  }
  return res;
}