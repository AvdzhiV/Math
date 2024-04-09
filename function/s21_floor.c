#include "../s21_math.h"

long double s21_floor(double x) {
  long double result;
  if (x == (long long)x)
    result = x;
  else
    result = x >= 0 ? (long long)x : (x -= 1., (long long)x);
  return result;
}