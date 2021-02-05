#include<stdio.h>
int main() {
char charType;
int intType;
float floatType;

// sizeof evaluates the size of a variable
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
    
return 0;
}
