// filename.c

#include <stdio.h>

// compile: $ gcc filename.c -o filename
// run: $ ./filename

int main(void) {
    // do something

    printf("Hello world!");

    return 0;
}

// command line arguments
// argc: number of arguments
// argv: pointer to array with arguments
int main(int argc, char *argv[]) {

    if (argc == 2) {
        printf("Argument: %s\n", argv[1]);
    }
    else if( argc > 2 ) {
        printf("%s\n", "Too many arguments.");
    }
    else {
        printf("%s\n", "Expecting one argument.");
    }

    return 0;
}

// misc operators
int a = 10;

// size in memory
sizeof(a)               // 4

// pointer
(int) &a                // -389511672

'''
Michael Sjoeberg
2019-08-15
https://github.com/michaelsjoeberg/c-playground/blob/master/basics/intro.c
'''