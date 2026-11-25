#pragma once

#include <stdbool.h>

double area_of_disk(double radius);

double area_of_ring(double outer_radius, double inner_radius);

int bigger_minus_smaller(int number_a, int number_b);

bool value_in_range(int lower_bound, int x, int upper_bound);

int sum_of_greater_squares(int a, int b, int c);

#define UNUSED(x) (void)(x)
