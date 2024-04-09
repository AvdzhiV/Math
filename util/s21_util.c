#include "s21_util.h"

// long double s21_ln(long double x) {
//   if (x <= 0) {
//     return S21_NAN;  // ln не определен для неположительных чисел.
//   }
//   // Инициализация переменных для ряда Тейлора.
//   long double term = (x - 1) / (x + 1);
//   long double sum = term;
//   long double term_squared = term * term;
//   long double divisor = 1;

//   // Вычисляем ряд Тейлора вокруг точки 1 (ln(1) = 0).
//   for (int i = 3; i <= 2000; i += 2) {
//     divisor += 2;
//     term *= term_squared;
//     sum += term / divisor;
//   }
//   return 2 * sum;
// }

// long double custom_int_power(double x, int exp) {
//   long double result = 1;
//   if (exp >= 0)
//     for (int i = 0; i < exp; i++) result *= x;
//   else
//     for (int i = 0; i > exp; i--) result /= x;

//   return result;
// }
