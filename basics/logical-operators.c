#include <stdbool.h>

// define and initialise boolean variables
bool T = true;
bool F = false;

// and, or
T || F                  // 1
T && (T && F)           // 0

// not
!T                      // 0
!(!T)                   // 1

// equality
1 == 2                  // 0
1 != 2                  // 1
1 > 2                   // 0
1 < 2                   // 1
1 >= 2                  // 0
1 <= 2                  // 1

/*
    Michael Sjoeberg
    2019-08-16
    https://github.com/michaelsjoeberg/c-playground/blob/master/basics/logical-operators.c
*/