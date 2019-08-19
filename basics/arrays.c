#define MAX_STRING_SIZE 40

// arrays are mutable
double array_one[] = { 200.0, -2.2, 1.0, 0.0 };
char array_two[][MAX_STRING_SIZE] = { "REMOVE", "RANDOM" };

array_one[0]                    // 200.000000
array_two[1]                    // RANDOM

array_one[0] = 50.0;

array_one[0]                    // 50.000000

// no built in length function

// calculate length based on type
int length = sizeof(array_one) / sizeof(double);

length                          // 4

'''
Michael Sjoeberg
2019-08-19
https://github.com/michaelsjoeberg/c-playground/blob/master/basics/arrays.c
'''