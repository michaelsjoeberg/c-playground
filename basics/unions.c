#include <string.h>

// union to store different data types in the same memory location

// outside scope: define union type
union Data {
    int i;
    float f;
    char str[20];
} data;

// inside scope: use union
union Data data;

printf("%lu\n", sizeof(data));              // 20

// specify union data
data.i = 10;
printf("%d\n", data.i);                     // 10

data.f = 200.00;
printf("%f\n", data.f);                     // 200.000000

strcpy(data.str, "This is a string.");
printf("%s\n", data.str);                   // This is a string.

// new assignment overwrite older
printf("%d\n", data.i);                     // 1936287828


/*
    Michael Sjoeberg
    2019-08-21
    https://github.com/michaelsjoeberg/c-playground/blob/master/basics/unions.c
*/