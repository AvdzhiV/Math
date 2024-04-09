#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../util/s21_util.h"

START_TEST(s21_sin_zero) {
  printf("---------------------------------------------\n");
  double x = 0.0;
  long double real = s21_sin(x);
  long double expected = sinl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_sin_one) {
  double x = 1.0;
  long double real = s21_sin(x);
  long double expected = sinl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_sin_S21_M_PI) {
  double x = S21_PI;
  long double real = s21_sin(x);
  long double expected = sinl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_sin_2_S21_M_PI) {
  double x = 2 * S21_PI;
  long double real = s21_sin(x);
  long double expected = sinl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_sin_S21_M_PI_2) {
  double x = S21_PI_2;
  long double real = s21_sin(x);
  long double expected = sinl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_sin_mS21_M_PI_2) {
  double x = -S21_PI_2;
  long double real = s21_sin(x);
  long double expected = sinl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_sin_S21_M_PI_4) {
  double x = S21_PI_4;
  long double real = s21_sin(x);
  long double expected = sinl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_sin_otric) {
  double x = -723.451239;
  long double real = s21_sin(x);
  long double expected = sinl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_sin_more_digits) {
  double x = 9876543210.123459;
  long double real = s21_sin(x);
  long double expected = sinl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_sin_more_digits_otric) {
  double x = -1826345210.123469;
  long double real = s21_sin(x);
  long double expected = sinl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

Suite *s21_sin_suite(void) {
  Suite *s = suite_create("s21_sin\n");
  TCase *tc_core = tcase_create("Core");
  tcase_add_test(tc_core, s21_sin_zero);
  tcase_add_test(tc_core, s21_sin_2_S21_M_PI);
  tcase_add_test(tc_core, s21_sin_one);
  tcase_add_test(tc_core, s21_sin_S21_M_PI);
  tcase_add_test(tc_core, s21_sin_S21_M_PI_2);
  tcase_add_test(tc_core, s21_sin_mS21_M_PI_2);
  tcase_add_test(tc_core, s21_sin_S21_M_PI_4);
  tcase_add_test(tc_core, s21_sin_otric);
  tcase_add_test(tc_core, s21_sin_more_digits);
  tcase_add_test(tc_core, s21_sin_more_digits_otric);
  suite_add_tcase(s, tc_core);
  return s;
}

// void run_test(Suite *test) {
//   SRunner *sr = srunner_create(test);
//   printf("\n");
//   srunner_run_all(sr, CK_NORMAL);
//   int number_failed = srunner_ntests_failed(sr);
//   printf("\n---------------------------------------------\n");
//   printf("Number tests failed: %d", number_failed);
//   printf("\n---------------------------------------------\n");
//   srunner_free(sr);
// }

// int main() {
//   run_test(s21_sin_suite());
//   return 0;
// }