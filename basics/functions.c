// declare function: before main() when functions are defined after the main() function
int function(int arg);

// define function
int function(int arg) {
    // do something

    return 0;
}

// example

// declare function
int power(int base, int x);

// main() function
int main(void) {
    // do something

    // call function
    power(2, 3)                 // 8

    return 0;
}

// define function
int power(int base, int x) {
    /* multiply base with itself x times */

    int result = 1;

    int i;
    for (i = 0; i < x; i++) {
        result = result * base;
    }

    return result;
}

// variable arguments
#include <stdarg.h>

// outside scope: define function with variable arguments
double average(int n, ...) {

    // requires stdarg.h
    va_list valist;

    double sum = 0.0;
    int i;

    // initialise valist for n arguments
    va_start(valist, n);

    // access arguments assigned to valist
    for (i = 0; i < n; i++) {
        sum += va_arg(valist, int);
    }

    // clean memory reserved for valist
    va_end(valist);

    return sum / n;
}

// inside scope: use function
printf("Average of 2, 3, 4, 5: %f\n", average(2, 3, 4, 5));         // Average of 2, 3, 4, 5: 3.500000

/*
    Michael Sjoeberg
    2019-08-22
    https://github.com/michaelsjoeberg/c-playground/blob/master/basics/functions.c
*/