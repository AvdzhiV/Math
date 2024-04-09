#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../util/s21_util.h"

START_TEST(s21_pow_zero) {
  printf("---------------------------------------------\n");
  double x = 0.0;
  double y = 0.0;
  long double real = s21_pow(x, y);
  long double expected = powl(x, y);
  printf("args: %f && %f\n", x, y);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_pow_one) {
  double x = 1.0;
  double y = 2.0;
  long double real = s21_pow(x, y);
  long double expected = powl(x, y);
  printf("args: %f && %f\n", x, y);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_pow_S21_M_PI) {
  double x = S21_PI;
  double y = 8.0;
  long double real = s21_pow(x, y);
  long double expected = powl(x, y);
  printf("args: %f && %f\n", x, y);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_pow_mS21_M_PI) {
  double x = -S21_PI;
  double y = -6.0;
  long double real = s21_pow(x, y);
  long double expected = powl(x, y);
  printf("args: %f && %f\n", x, y);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_pow_big) {
  double x = 21440.2423;
  double y = 0.5;
  long double real = s21_pow(x, y);
  long double expected = powl(x, y);
  printf("args: %f && %f\n", x, y);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_pow_mbig) {
  double x = -2147483647;
  double y = 24.4;
  long double real = s21_pow(x, y);
  long double expected = powl(x, y);
  printf("args: %f && %f\n", x, y);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_ldouble_nan(real);
}
END_TEST

START_TEST(s21_pow_zero_sec) {
  double x = 0;
  double y = 24.4;
  long double real = s21_pow(x, y);
  long double expected = powl(x, y);
  printf("args: %f && %f\n", x, y);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

Suite *s21_pow_suite(void) {
  Suite *s = suite_create("s21_pow\n");
  TCase *tc_core = tcase_create("Core");
  tcase_add_test(tc_core, s21_pow_zero);
  tcase_add_test(tc_core, s21_pow_one);
  tcase_add_test(tc_core, s21_pow_S21_M_PI);
  tcase_add_test(tc_core, s21_pow_mS21_M_PI);
  tcase_add_test(tc_core, s21_pow_big);
  tcase_add_test(tc_core, s21_pow_mbig);
  tcase_add_test(tc_core, s21_pow_zero_sec);
  suite_add_tcase(s, tc_core);
  return s;
}

// void run_test(Suite *test) {
//   SRunner *sr = srunner_create(test);
//   printf("\n");
//   srunner_run_all(sr, CK_NORMAL);
//   srunner_free(sr);
// }

// int main() {
//   run_test(s21_pow_suite());
//   return 0;
// }
