// Write a program to print the value of a variable i by using "pointer to pointer" type of variable...
#include<stdio.h>

int main(){
    int i =522;
    int *ptr ;
    int **ptr_ptr ;
ptr = &i;
ptr_ptr = &ptr;

    printf("The value of i is %d", **ptr_ptr);
    return 0;
}