#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../util/s21_util.h"

START_TEST(s21_ceil_zero_plus) {
  printf("---------------------------------------------\n");
  double x = +0.;
  long double real = s21_ceil(x);
  long double expected = ceil(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_ceil_zero_minus) {
  double x = -0.;
  long double real = s21_ceil(x);
  long double expected = ceil(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_ceil_positive_number_first) {
  double x = -3.4;
  long double real = s21_ceil(x);
  long double expected = ceil(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_ceil_positive_number_second) {
  double x = 3.;
  long double real = s21_ceil(x);
  long double expected = ceil(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_ceil_positive_number_thirth) {
  double x = 3.7;
  long double real = s21_ceil(x);
  long double expected = ceil(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_ceil_negative_number_first) {
  double x = -3.4;
  long double real = s21_ceil(x);
  long double expected = ceil(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_ceil_negative_number_second) {
  double x = -3;
  long double real = s21_ceil(x);
  long double expected = ceil(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_ceil_negative_number_thirth) {
  double x = -3.7;
  long double real = s21_ceil(x);
  long double expected = ceil(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

Suite *s21_ceil_suite(void) {
  Suite *s = suite_create("s21_ceil\n");
  TCase *tc_core = tcase_create("Core");
  tcase_add_test(tc_core, s21_ceil_zero_plus);
  tcase_add_test(tc_core, s21_ceil_zero_minus);
  tcase_add_test(tc_core, s21_ceil_positive_number_first);
  tcase_add_test(tc_core, s21_ceil_positive_number_second);
  tcase_add_test(tc_core, s21_ceil_positive_number_thirth);
  tcase_add_test(tc_core, s21_ceil_negative_number_first);
  tcase_add_test(tc_core, s21_ceil_negative_number_second);
  tcase_add_test(tc_core, s21_ceil_negative_number_thirth);
  suite_add_tcase(s, tc_core);
  return s;
}

// void run_test(Suite *test) {
//   SRunner *sr = srunner_create(test);
//   printf("\n");
//   srunner_run_all(sr, CK_NORMAL);
//   srunner_free(sr);
// }
//
// int main() {
//   run_test(s21_ceil_suite());
//   return 0;
// }
