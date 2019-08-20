#include <string.h>

// structures can hold data items of different types

// outside scope: define a structure
struct Contacts {
    char name[40];
    char email[40];
    int number;
} contact;

// inside scope: access structure

// declare struct type
struct Contacts contact_one;

// specify contact_one
strcpy(contact_one.name, "Adam");
strcpy(contact_one.email, "adam@email.com");
contact_one.number = 2445055;

printf("%s\n", contact_one.name);           // Adam
printf("%s\n", contact_one.email);          // adam@email.com
printf("%d\n", contact_one.number);         // 2445055

// struct as function argument
void function(struct Contacts contact);

// bit fields

// example
struct {
    unsigned int x;
    unsigned int y;
} status_one;

struct {
    unsigned int x : 1;
    unsigned int y : 1;
} status_two;

printf("%lu\n", sizeof(status_one));        // 8
printf("%lu\n", sizeof(status_two));        // 4


'''
Michael Sjoeberg
2019-08-21
https://github.com/michaelsjoeberg/c-playground/blob/master/basics/structures.c
'''