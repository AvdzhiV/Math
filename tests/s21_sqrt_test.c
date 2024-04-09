#include <check.h>
#include <math.h>
#include <stdio.h>

#include "../s21_math.h"
#define EPS_CMP 1e-06

START_TEST(s21_sqrt_positive) {
  printf("---------------------------------------------\n");
  double x = 25;
  long double real = s21_sqrt(x);
  long double expected = sqrtl(x);
  printf("num: %lf\n", x);
  printf("expected: %Lf\n", expected);
  printf("real: %Lf", real);
  // printf(fabs(expected - real) ? "SUCCESS" : "FAIL");
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_sqrt_negtive) {
  double x = -25;
  long double real = s21_sqrt(x);
  long double expected = sqrtl(x);
  printf("num: %lf\n", x);
  printf("expected: %Lf\n", expected);
  printf("real: %Lf", real);
  // printf(fabsl(expected - real) ? "SUCCESS" : "FAIL");
  printf("\n---------------------------------------------\n");
  ck_assert_ldouble_nan(fabsl(real));
}
END_TEST

START_TEST(s21_sqrt_big) {
  double x = 16331239353195369;
  long double real = s21_sqrt(x);
  long double expected = sqrtl(x);
  printf("num: %lf\n", x);
  printf("expected: %Lf\n", expected);
  printf("real: %Lf", real);
  // printf(real == expected ? "SUCCESS" : "FAIL");
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_sqrt_small) {
  double x = 1e-300;
  long double real = s21_sqrt(x);
  long double expected = sqrtl(x);
  printf("num: %lf\n", x);
  printf("expected: %Lf\n", expected);
  printf("real: %Lf", real);
  // printf(fabs(expected - real) ? "SUCCESS" : "FAIL");
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

Suite *s21_sqrt_suite(void) {
  Suite *s = suite_create("s21_sqrt\n");
  TCase *tc_core = tcase_create("Core");
  tcase_add_test(tc_core, s21_sqrt_positive);
  tcase_add_test(tc_core, s21_sqrt_negtive);
  tcase_add_test(tc_core, s21_sqrt_big);
  tcase_add_test(tc_core, s21_sqrt_small);
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
  run_test(s21_sqrt_suite());
  return 0;
}
*/