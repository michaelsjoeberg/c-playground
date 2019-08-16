#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// declare variable
//extern int a;

// variable declaration
extern int x;
extern char y[];
extern float z;
extern double a;            // double size of float

int main() {
    // define variable
    //int a;

    // initialise variable
    //a = 10;

    // print
    //printf("%d\n", a);

    // variable definition
    int x;

    // variable definition and initialisation
    char y[] = "String";
    float z = 1.05;
    double a = 12.5;

    // variable initialisation
    x = 6;

    printf("%d\n", x);
    printf("%s\n", y);
    printf("%f\n", z);
    printf("%f\n", a);

    // multiple assignment
    int c, d;

    c = d = 6;

    printf("%d, %d\n", c, d);

    return 0;
}