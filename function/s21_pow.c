#include "../s21_math.h"

// long double s21_pow(double base, double exp){
//     long double result = 1;
//     long double otr_exp = exp*-1;
//     if(exp==0){
//         result = 1.;
//     }
//     if(base==0){
//         result = 0;
//     }
//     else if(exp - (long long double int)exp==0 && exp>1){
//         for(int i=0;i<exp;i++){
//             result*=base;
//         }
//     }
//     else if(exp<0){
//         result = 1/s21_pow(base,otr_exp);
//     }
//     else{
//         result = s21_exp(exp*s21_log(base));
//     }
//     return result;
// }

long double s21_pow(double base, double exp) {
  long double result = 1;
  long double otr_expe = exp * -1;
  if (exp == 0) {
    return 1.;
  }
  if (base == 0) {
    result = 0;
  } else if (exp - (long long int)exp == 0 && exp > 1) {
    for (int i = 0; i < exp; i++) {
      result *= base;
    }
  } else if (exp < 0) {
    result = 1 / s21_pow(base, otr_expe);
  } else {
    result = s21_exp(exp * s21_log(base));
  }
  return result;
}
