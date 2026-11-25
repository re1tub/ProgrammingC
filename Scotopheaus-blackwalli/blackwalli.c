#include "blackwalli.h"
#include <math.h>
// #include <stdio.h>

double area_of_disk(double radius) { return M_PI * (radius * radius); }

double area_of_ring(double outer_radius, double inner_radius) {
  return M_PI * (outer_radius * outer_radius - inner_radius * inner_radius);
}

int bigger_minus_smaller(int number_a, int number_b) {
  if (number_a > number_b) {
    return number_a - number_b;
  } else {
    return number_b - number_a;
  }
}

bool value_in_range(int lower_bound, int x, int upper_bound) {
  if (lower_bound <= x && x <= upper_bound) {
    return true;
  } else {
    return false;
  }
}

int sum_of_greater_squares(int a, int b, int c) {

  while ((a * a) >= (b * b) && (a * a) >= (c * c)) {
    if ((b * b) >= (c * c)) { // checking if c is greater than b
      return ((a * a) + (b * b));
    } else {
      return ((a * a) + (c * c));
    }
  }

  while ((b * b) >= (a * a) && (b * b) >= (c * c)) {
    if ((a * a) >= (c * c)) {
      return ((b * b) + (a * a));
    } else {
      return ((b * b) + (c * c));
    }
  }

  while ((c * c) >= (a * a) && (c * c) >= (b * b)) {
    if ((a * a) >= (b * b)) {
      return ((c * c) + (b * b));
    } else {
      return ((c * c) + (a * a));
    }
  }
  return 0;
}
