#include "s21_math.h"

long double s21_fabs(double x) {
  if (x < 0.0) {
    x *= -1.0;
  }
  return x;
}
