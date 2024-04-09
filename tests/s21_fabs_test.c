#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../util/s21_util.h"

START_TEST(test_s21_fabs_base) {
  printf("---------------------------------------------\n");
  double x = 1.;
  long double real = s21_fabs(x);
  long double expected = fabsl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(test_s21_fabs_float) {
  double x = 2.5567;
  long double real = s21_fabs(x);
  long double expected = fabsl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(test_s21_fabs_float2) {
  double x = 0.6;
  long double real = s21_fabs(x);
  long double expected = fabsl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(test_s21_fabs_otr) {
  double x = -4.789;
  long double real = s21_fabs(x);
  long double expected = fabsl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

Suite *s21_fabs_suite(void) {
  Suite *suite = suite_create("s21_fabs");
  TCase *tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_s21_fabs_base);
  tcase_add_test(tc_core, test_s21_fabs_float);
  tcase_add_test(tc_core, test_s21_fabs_float2);
  tcase_add_test(tc_core, test_s21_fabs_otr);
  suite_add_tcase(suite, tc_core);
  return suite;
}

// int main(void) {
//   Suite *suite = s21_fabs_suite();
//   SRunner *runner = srunner_create(suite);
//   srunner_run_all(runner, CK_NORMAL);
//   int number_failed = srunner_ntests_failed(runner);
//   srunner_free(runner);
//   return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
// }
