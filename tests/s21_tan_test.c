#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../util/s21_util.h"

START_TEST(S21tan_zero) {
  printf("---------------------------------------------\n");
  double x = 0.0;
  long double real = s21_tan(x);
  long double expected = tanl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(S21tan_S21_PI_2) {
  double x = S21_PI_2 - 0.0001;
  long double real = s21_tan(x);
  long double expected = tanl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(S21tan_mS21_PI_2) {
  double x = -S21_PI_2 + 0.00001;
  long double real = s21_tan(x);
  long double expected = tanl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(S21tan_S213_M_PI_2) {
  double x = 3 * S21_PI_2 - 0.0001;
  long double real = s21_tan(x);
  long double expected = tanl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(S21tan_S21_PI) {
  double x = S21_PI;
  long double real = s21_tan(x);
  long double expected = tanl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(S21tan_S21_PI_4) {
  double x = S21_PI_4;
  long double real = s21_tan(x);
  long double expected = tanl(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

Suite *s21_tan_suite(void) {
  Suite *s = suite_create("s21_tan\n");
  TCase *tc_core = tcase_create("Core");
  tcase_add_test(tc_core, S21tan_zero);
  tcase_add_test(tc_core, S21tan_S21_PI);
  tcase_add_test(tc_core, S21tan_S21_PI_4);
  tcase_add_test(tc_core, S21tan_S21_PI_2);
  tcase_add_test(tc_core, S21tan_S213_M_PI_2);
  tcase_add_test(tc_core, S21tan_mS21_PI_2);
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
//   run_test(S21tan_suite());
//   return 0;
// }
