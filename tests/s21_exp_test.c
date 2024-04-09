#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../s21_math.h"
#include "../util/s21_util.h"

START_TEST(s21_exp_one_plus) {
  printf("---------------------------------------------\n");
  double x = +1.;
  long double real = s21_exp(x);
  long double expected = exp(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_exp_one_minus) {
  double x = -1.;
  long double real = s21_exp(x);
  long double expected = exp(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_exp_positive_number_first) {
  double x = 0.00006666;
  long double real = s21_exp(x);
  long double expected = exp(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_exp_positive_number_second) {
  double x = 3.4;
  long double real = s21_exp(x);
  long double expected = exp(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_exp_positive_number_thirth) {
  double x = 30;
  long double real = s21_exp(x);
  long double expected = exp(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_exp_positive_number_sixth) {
  double x = 1e-10;
  long double real = s21_exp(x);
  long double expected = exp(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_exp_negative_number_first) {
  double x = -0.000666;
  long double real = s21_exp(x);
  long double expected = exp(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_exp_negative_number_second) {
  double x = -3.2;
  long double real = s21_exp(x);
  long double expected = exp(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_exp_negative_number_thirth) {
  double x = -19.99694654651;
  long double real = s21_exp(x);
  long double expected = exp(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_exp_negative_number_fourth) {
  double x = -40;
  long double real = s21_exp(x);
  long double expected = exp(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_exp_negative_number_sixth) {
  double x = -1e-100;
  long double real = s21_exp(x);
  long double expected = exp(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

START_TEST(s21_exp_inf_pos) {
  double x = S21_INF_POS;
  long double real = s21_exp(x);
  long double expected = exp(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_ldouble_infinite(real);
}
END_TEST

START_TEST(s21_exp_inf_neg) {
  double x = S21_INF_NEG;
  long double real = s21_exp(x);
  long double expected = exp(x);
  printf("arg : %f\n", x);
  printf("real: %.8Lf\n", real);
  printf("expd: %.8Lf", expected);
  printf("\n---------------------------------------------\n");
  ck_assert_double_eq_tol(real, expected, EPS_CMP);
}
END_TEST

Suite *s21_exp_suite(void) {
  Suite *s = suite_create("s21_exp\n");
  TCase *tc_core = tcase_create("Core");
  tcase_add_test(tc_core, s21_exp_one_plus);
  tcase_add_test(tc_core, s21_exp_one_minus);
  tcase_add_test(tc_core, s21_exp_positive_number_first);
  tcase_add_test(tc_core, s21_exp_positive_number_second);
  tcase_add_test(tc_core, s21_exp_positive_number_thirth);
  tcase_add_test(tc_core, s21_exp_positive_number_sixth);
  tcase_add_test(tc_core, s21_exp_negative_number_first);
  tcase_add_test(tc_core, s21_exp_negative_number_second);
  tcase_add_test(tc_core, s21_exp_negative_number_thirth);
  tcase_add_test(tc_core, s21_exp_negative_number_fourth);
  tcase_add_test(tc_core, s21_exp_negative_number_sixth);
  tcase_add_test(tc_core, s21_exp_inf_pos);
  tcase_add_test(tc_core, s21_exp_inf_neg);
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
//   run_test(s21_exp_suite());
//   return 0;
// }
