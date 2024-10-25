//A function defined in C can call itself. This is called recursion
//Example: factorial(n) = factorial(n-1) x n
#include<stdio.h>
int factorial(int x);

int main(){
int a= 4;
    printf("The value of factorial %d is %d", a , factorial(a));
    return 0;
}

int factorial(int x){
    if (x==1 || x==0){
        return 1;
    }
    else{
        return x * factorial(x - 1);
    }
}