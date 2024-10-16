//Write a program to print multiplication table of 10 in reversed order.
#include<stdio.h>

int main(){
    printf("Multiplicaton table of 10\n:");
    for(int a= 10; a; a--){
        printf("10 x %d = %d\n", a, 10*a);
    }
    return 0;
}