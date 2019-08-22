// outside scope (global)
// variable declaration
extern int x;
extern char y[];
extern float z;
extern double a;            // double size of float

// inside scope
// variable definition
int x;

// variable definition and initialisation
char y[] = "String";        // String
float z = 1.05;             // 1.050000
double a = 12.5;            // 12.500000

// variable initialisation
x = 6;

// multiple variable definition
int c, d;

// multiple variable initialisation
c = d = 6;                  // 6, 6

/*
    Michael Sjoeberg
    2019-08-16
    https://github.com/michaelsjoeberg/c-playground/blob/master/basics/variables.c
*/