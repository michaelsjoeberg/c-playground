#include <stdio.h>
#include <math.h>

int main(void) {

    int base;

    scanf("%d", &base);
    if (base > 1) {
        printf("%.8f\n", sqrt(base));

    } else {
        printf("%s\n", "Nope.");
    }
}

// ./main
// 2
// 1.41421356

/*
    Michael Sjoeberg
    2019-08-22
    https://github.com/michaelsjoeberg/c-playground/blob/master/applications/temperature-converter.c
*/