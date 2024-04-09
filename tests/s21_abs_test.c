#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../util/s21_util.h"

START_TEST(test_1) {
  printf("---------------------------------------------\n");
  int x = 5;
  int real = s21_abs(x);
  int expected = abs(x);
  printf("arg: %d\n", x);
  printf("real: %d\n", s21_abs(x));
  printf("expd:100\n");
  printf("---------------------------------------------\n");
  ck_assert_int_eq(real, expected);
}
END_TEST

START_TEST(test_2) {
  int x = -5;
  int real = s21_abs(x);
  int expected = abs(x);
  printf("arg: %d\n", x);
  printf("real: %d\n", s21_abs(x));
  printf("expd:-100\n");
  printf("---------------------------------------------\n");
  ck_assert_int_eq(real, expected);
}
END_TEST

START_TEST(test_3) {
  int x = 0;
  int real = s21_abs(x);
  int expected = abs(x);
  printf("arg: %d\n", x);
  printf("real: %d\n", s21_abs(x));
  printf("expd:0\n");
  printf("---------------------------------------------\n");
  ck_assert_int_eq(real, expected);
}
END_TEST

START_TEST(test_4) {
  int x = 4.1;
  int real = s21_abs(x);
  int expected = abs(x);
  printf("arg: %d\n", x);
  printf("real: %d\n", s21_abs(x));
  printf("expd:0\n");
  printf("---------------------------------------------\n");
  ck_assert_int_eq(real, expected);
}
END_TEST

Suite *s21_abs_suite(void) {
  Suite *s = suite_create("s21_abs\n");
  TCase *tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_1);
  tcase_add_test(tc_core, test_2);
  tcase_add_test(tc_core, test_3);
  tcase_add_test(tc_core, test_4);
  suite_add_tcase(s, tc_core);
  return s;
}
