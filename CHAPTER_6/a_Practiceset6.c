// Write a program to print the address of the variable. Use this address to get the value of this variable.
#include<stdio.h>

int main(){
    int a = 4;
    int *b;
    b = &a;
    printf("The address of variable a is %u\n", &a);
    printf("The value of variable a is %u\n", *b);
    printf("The value of variable a is %d\n", a);
    return 0;
}