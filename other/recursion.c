// outside scope: define recursive function
void function() {
   function();
}

// example: calculate the factorial
// outside scope: define recursive function
unsigned long long int factorial(unsigned int i) {
    if (i <= 1) {
        return 1;
    }
    return i * factorial(i - 1);
}

// inside scope: use recursive function
int i = 12;

printf("Factorial of %d is %llu\n", i, factorial(i));       // Factorial of 12 is 479001600

'''
Michael Sjoeberg
2019-08-22
https://github.com/michaelsjoeberg/c-playground/blob/master/other/recursion.c
'''