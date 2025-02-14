#ifndef S21_TESTS_H
#define S21_TESTS_H

#include <check.h>
#include <stdio.h>

#include "../util/s21_util.h"

Suite *s21_abs_suite(void);
Suite *s21_acos_suite(void);
Suite *s21_asin_suite(void);
Suite *s21_atan_suite(void);
Suite *s21_ceil_suite(void);
Suite *s21_cos_suite(void);
Suite *s21_exp_suite(void);
Suite *s21_fabs_suite(void);
Suite *s21_floor_suite(void);
Suite *s21_fmod_suite(void);
Suite *s21_log_suite(void);
Suite *s21_pow_suite(void);
Suite *s21_sin_suite(void);
Suite *s21_sqrt_suite(void);
Suite *s21_tan_suite(void);

#endif