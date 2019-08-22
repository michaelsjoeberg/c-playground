#include <stdio.h>
#include <assert.h>

// declare functions
double c_to_f(double temp);
double f_to_c(double temp);

int main(void) {

    // base
    double temp;
    char unit;

    scanf("%lf %c", &temp, &unit);
    if (unit == 'C') {
        printf("%.1f\n F", c_to_f(temp));

    } else if (unit == 'F') {
        printf("%.1f\n C", f_to_c(temp));
    }
}

// define functions

// convert C to F
double c_to_f(double temp) {
    return ((9.0 / 5) * temp + 32);
}

// convert F to C
double f_to_c(double temp) {
    return ((5.0 / 9) * (temp - 32));
}

/*
    Michael Sjoeberg
    2019-08-22
    https://github.com/michaelsjoeberg/c-playground/blob/master/applications/temperature-converter.c
*/