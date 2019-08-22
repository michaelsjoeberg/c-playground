/*
    C is a general-purpose, procedural language developed by
    Dennis Ritchie at Bell Labs in 1972.
*/

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

    // print file name
    printf("Running: %s\n", argv[0]);

    // print arguments
    if (argc > 1) {
        printf("%s\n", "Arguments: ");
        
        int i;
        for (i = 1; i < argc; i++) {
            printf("\t%s\n", argv[i]);
        }
    }

    // do something

    return 0;
}

// misc operators
int a = 10;

// size in memory
sizeof(a)               // 4

// pointer
(int) &a                // -389511672

/*
    Michael Sjoeberg
    2019-08-22
    https://github.com/michaelsjoeberg/c-playground/blob/master/basics/intro.c
*/