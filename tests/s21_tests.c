#include "s21_tests.h"

void run_test(Suite *test) {
  SRunner *sr = srunner_create(test);
  printf("\n");
  srunner_run_all(sr, CK_NORMAL);
}

int main() {
  run_test(s21_abs_suite());
  run_test(s21_acos_suite());
  run_test(s21_asin_suite());
  run_test(s21_atan_suite());
  run_test(s21_ceil_suite());
  run_test(s21_cos_suite());
  run_test(s21_exp_suite());
  run_test(s21_fabs_suite());
  run_test(s21_floor_suite());
  run_test(s21_fmod_suite());
  run_test(s21_log_suite());
  run_test(s21_pow_suite());
  run_test(s21_sin_suite());
  run_test(s21_sqrt_suite());
  run_test(s21_tan_suite());
  return 0;
}