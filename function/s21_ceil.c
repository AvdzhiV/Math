#include "../s21_math.h"

long double s21_ceil(double x) {
  long double result;
  if (x == (long long)x)
    result = x;
  else
    result = x > 0 ? (x += 1., (long long)x) : (long long)x;
  return result;
}
