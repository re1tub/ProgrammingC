# Scotophaeus blackwalli: Project Design Document

### Dontae Butler

Computer Engineering BS, University of California - Santa Cruz

## Abstract

This Design document will focus on explaining the behavior of each function needed to properly run the blackwalli code. The test code here has already been provided. The original project was a homework assignment, where we were asked to write 5 functions and make sure that they pass the cases.

## function 1: `area_of_disk`

This function is responsible for taking the radius of a disk, then returning it's area. Assuming we are given a positive radius $r$, I will implement this function by writing the formula $A = pi * r^2$.

## function 2: `area_of_ring`

This function is responsible taking the outer radius of a disk and the inner radius of a disk and returning the area of the disk. I will implement this function by subtracting the area of the outer disk to the area of the inner disk.

## function 3: `bigger_minus_smaller`

This function is responsible for determining which two given numbers are greater, and then returning the greater number minus the smaller number. I will implement this function by taking the two numbers and using a if statement to compare to two and what the output will be based on the result.

## function 4: `value_in_range`

This function starts with three numbers a lower bound, a specific value, and an upper bound. It returns `true` if the value is in range of lower and upper, and false otherwise. I will implement this function by writing an if statement that checks weather the specific value `x` is in range of upper and lower. If it is in range, then the functions will return `true`, else it will return `fasle`.

## function 5: `sum_of_greater_squares`

The function starts with 3 numbers `a`, `b`, and `c`. It is responsible for returning the sum of the two greatest squares out of $a^2, b^2$ and $c^2$. A side note: any of these numbers may be positive or negative(or zero) and the square of a large negative number will always be positive. I will implement this function by comparing the output of each squared value using an if statement that compares the values with `>` `<`. I will also check for if multiple outputs happen to be equal. I will also ensure that if the value of the number being squared is zero, it will automatically equal zero.

## the caat program

Lastly, this program is responsible for taking each character from `stdin` one at a time and using `getchar()` and output every character to `stdout()` using `putchar()`. The output should take all vowels and output them twice. I will implement this function using a while statement that states while getchar not in end of file, I will check the value to see if it is a vowel, it so it will return the value twice, else it will increment one and check the next value until end of file.
