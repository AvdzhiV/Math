#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../util/s21_util.h"

START_TEST(s21_cos_zero) {
  printf("---------------------------------------------\n");
  double x = 0.0;
  long double real = s21_cos(x);
  long double expected = cosl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_cos_one) {
  double x = 1.0;
  long double real = s21_cos(x);
  long double expected = cosl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_cos_S21_M_PI) {
  double x = S21_PI;
  long double real = s21_cos(x);
  long double expected = cosl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_cos_mS21_M_PI) {
  double x = -S21_PI;
  long double real = s21_cos(x);
  long double expected = cosl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_cos_S21_M_PI_2) {
  double x = S21_PI_2;
  long double real = s21_cos(x);
  long double expected = cosl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_cos_mS21_M_PI_2) {
  double x = -S21_PI_2;
  long double real = s21_cos(x);
  long double expected = cosl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_cos_S21_M_PI_4) {
  double x = S21_PI_4;
  long double real = s21_cos(x);
  long double expected = cosl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_cos_big) {
  double x = 2147483647;
  long double real = s21_cos(x);
  long double expected = cosl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_cos_mbig) {
  double x = -2147483647;
  long double real = s21_cos(x);
  long double expected = cosl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

Suite *s21_cos_suite(void) {
  Suite *s = suite_create("s21_cos\n");
  TCase *tc_core = tcase_create("Core");
  tcase_add_test(tc_core, s21_cos_zero);
  tcase_add_test(tc_core, s21_cos_one);
  tcase_add_test(tc_core, s21_cos_S21_M_PI);
  tcase_add_test(tc_core, s21_cos_mS21_M_PI);
  tcase_add_test(tc_core, s21_cos_S21_M_PI_2);
  tcase_add_test(tc_core, s21_cos_mS21_M_PI_2);
  tcase_add_test(tc_core, s21_cos_S21_M_PI_4);
  tcase_add_test(tc_core, s21_cos_big);
  tcase_add_test(tc_core, s21_cos_mbig);
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
//   run_test(s21_cos_suite());
//   return 0;
// }
