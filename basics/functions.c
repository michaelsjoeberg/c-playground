// declare function prototype before main() function when functions occur after main() function
int function(int arg);

// declare function
int function(int arg) {
    // do something

    return 0;
}

// example

// declare function prototype
int power(int base, int x);

// main() function
int main(void) {
    // do something

    // call function
    power(2, 3)                 // 8

    return 0;
}

// declare function after main() function
int power(int base, int x) {
    /* multiply base with itself x times */

    int result = 1;

    int i;
    for (i = 0; i < x; i++) {
        result = result * base;
    }

    return result;
}

'''
Michael Sjoeberg
2019-08-20
https://github.com/michaelsjoeberg/c-playground/blob/master/basics/functions.c
'''