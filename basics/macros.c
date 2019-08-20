printf("%s\n", __FILE__);       // test.c
printf("%s\n", __DATE__);       // Aug 21 2019
printf("%s\n", __TIME__);       // 01:22:18
printf("%d\n", __LINE__);       // 16
printf("%d\n", __STDC__);       // 1

// stringize
// outside scope: define macro
#define  error_message(e)  \
   printf("Error: " #e "\n")

// inside scope: use macro
error_message(This is an error.);           // Error: This is an error.

// defined
// outside scope: define macro
#if !defined (MESSAGE)
   #define MESSAGE "This is a message."
#endif

// inside scope: use macro
printf("%s\n", MESSAGE);                    // This is a message.

// parameterized macros
// outside scope: define macro
#define square(x) ((x) * (x))
#define MAX(a,b) ((a) > (b) ? (a) : (b))

printf("%d\n", square(2));                  // 4
printf("%d\n", MAX(4,5));                   // 5

'''
Michael Sjoeberg
2019-08-21
https://github.com/michaelsjoeberg/c-playground/blob/master/basics/macros.c
'''