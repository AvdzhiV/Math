#ifndef S21_UTIL_H
#define S21_UTIL_H
#include "../s21_math.h"

#define LN_2 0.69314718055994530941723212145818l
#define LN_10 2.3025850929940456840179914546844l
#define ACCURACY_LN 500.l
#define ACCURACY_EXP 1000.
#define S21_EPS 1e-17
#define S21_EXP 2.7182818284590452353602874713527
#define S21_PI 3.14159265358979323846
#define S21_PI_2 1.57079632679489661923
#define S21_PI_4 0.785398163397448309616
#define S21_PI_12 (S21_PI / 12.)
#define S21_PI_6 (S21_PI / 6.)
#define S21_NAN 0.0 / 0.0
#define S21_INF_POS +1.0 / 0.0
#define S21_INF S21_INF_POS
#define S21_INF_NEG -1.0 / 0.0
#define S21_NEGZERO -0.0
#define EPS_CMP 1e-06  // for tests
#define S21_MIN_INF -__builtin_huge_vall()

// long double s21_ln(long double x)

#endif