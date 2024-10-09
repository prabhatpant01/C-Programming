#include<stdio.h>

int main(){
    int principal = 100 , rate = 5 , years= 2;
    int simpleInterest = (principal * rate * years/100);

    printf("The value of simple interest is %d", simpleInterest);

    return 0;
}