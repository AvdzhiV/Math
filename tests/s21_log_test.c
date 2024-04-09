#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../s21_math.h"
#define EPS_CMP 1e-06

START_TEST(s21_log_positive) {
  printf("---------------------------------------------\n");
  double x = 25;
  long double real = s21_log(x);
  long double expected = logl(x);
  printf("num: %lf\n", x);
  printf("expected: %Lf\n", expected);
  printf("real: %Lf", real);
  // printf(fabs(real - expected) < EPS_CMP ? "SUCCESS" : "FAIL");
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_log_negtive) {
  double x = -25;
  long double real = s21_log(x);
  long double expected = logl(x);
  printf("num: %lf\n", x);
  printf("expected: %Lf\n", expected);
  printf("real: %Lf", real);
  // printf(real == expected ? "SUCCESS" : "FAIL");
  printf("\n---------------------------------------------\n");
  ck_assert_ldouble_nan(fabsl(real));
}
END_TEST

START_TEST(s21_log_big) {
  double x = 16331239353195369;
  long double real = s21_log(x);
  long double expected = logl(x);
  printf("num: %lf\n", x);
  printf("expected: %Lf\n", expected);
  printf("real: %Lf", real);
  // printf(fabs(real - expected) < EPS_CMP  ? "SUCCESS" : "FAIL");
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_log_small) {
  double x = 1e-15;
  long double real = s21_log(x);
  long double expected = logl(x);
  printf("num: %lf\n", x);
  printf("expected: %Lf\n", expected);
  printf("real: %Lf", real);
  // printf(fabs(real - expected) < EPS_CMP ? "SUCCESS" : "FAIL");
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

Suite *s21_log_suite(void) {
  Suite *s = suite_create("s21_log\n");
  TCase *tc_core = tcase_create("Core");
  tcase_add_test(tc_core, s21_log_positive);
  tcase_add_test(tc_core, s21_log_negtive);
  tcase_add_test(tc_core, s21_log_big);
  tcase_add_test(tc_core, s21_log_small);
  suite_add_tcase(s, tc_core);
  return s;
}
/*
void run_test(Suite *test) {
  SRunner *sr = srunner_create(test);
  printf("\n");
  srunner_run_all(sr, CK_NORMAL);
  srunner_free(sr);
}*/
/*
int main() {
  run_test(s21_log_suite());
  return 0;
}*/
