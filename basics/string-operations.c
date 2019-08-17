#include <ctype.h>
#include <string.h>

char a = 'a';
char b = 'B';

toupper(a)              // A
tolower(b)              // b

// conditionals
isdigit(a)              // 0 (false)
islower(a)              // 1 (true)
isupper(a)              // 0 (false)

// comparing strings
char first_string[] = "This is a string.";
char second_string[] = "This is a string.";
char third_String[] = "This is another string.";

strcmp(first_string, second_string)         // 0 (equal)
strcmp(first_string, third_String)          // not equal

strlen(first_string)                        // 17

'''
Michael Sjoeberg
2019-08-17
https://github.com/michaelsjoeberg/c-playground/blob/master/basics/string-operations.c
'''