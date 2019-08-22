#include <stdlib.h>
#include <math.h>

10 + 20                         // 30
20 - 10                         // 10
10 * 20                         // 200
20 / 10                         // 2

// power has no operator
pow(10, 2)                      // 100.00000

// floating point conversion
10.0 + (10 + 20)                // 40.000000

// note: char is promoted to int value
'c' + 10                        // 109 (ascii value of c is 99)

// floating point conversion using type casting
(double) 10.0 + (10 + 20)       // 40.000000
(double) 20.0 - (10 + 10)       // 0.000000
(double) 10.0 * (10 * 2)        // 200.000000

// common division error
30 / 20                         // 1
(double) 30 / 20                // 1.500000

// integer divison, quotient
20 / 20                         // 1
30 / 20                         // 1
40 / 20                         // 2

// modulo, remainder
10 % 20                         // 10

// module, remainder on floating point
fmod(12.5, 10.0)                // 2.500000

// built in numerical operations
abs(-20)                        // 20

// no built in sum
// no built in min
// no built in max

// rounding value
round(2.945)                    // 3.000000
round(2.495)                    // 2.000000

// no built in round to decimal places

// increment and decrement
int a = 10;

a++                             // 11
a--                             // 9

'''
Michael Sjoeberg
2019-08-16
https://github.com/michaelsjoeberg/c-playground/blob/master/basics/arithmetic-operators.c
'''