//Q8. Write a program to calculate the factorial of a given number using a for loop.
#include<stdio.h>

int main(){
    int i =0, n=6, factorial =1;
    for(i=1; i<=n; i++){
        factorial *=i;
    }
    printf("The value of factorial %d is %d", n , factorial);
    return 0;
}