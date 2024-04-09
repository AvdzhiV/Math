#include "../s21_math.h"

long double s21_cos(double x) {
  // Переводим угол в диапазон от -pi до pi
  while (x > S21_PI) x -= 2 * S21_PI;
  while (x < -S21_PI) x += 2 * S21_PI;

  long double result = 1.0;
  long double term = 1.0;
  int i = 2;

  while (s21_fabs(term) > S21_EPS) {
    term *= -x * x / (i * (i - 1));
    result += term;
    i += 2;
  }

  return result;
}