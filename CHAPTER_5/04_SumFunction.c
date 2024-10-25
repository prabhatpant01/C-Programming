#include<stdio.h>
// Sum is a function which takes a and b as input and returns as integer as an output.
int sum(int a, int b);// Function Prototype declaration.

int main(){
    int c;
 c = sum(3 , 5); //Function call.                 Here 3 & 5 are Arguments
 printf("The value of c is %d\n", c);
    return 0;
}
int sum(int a , int b){// Function definition
    int result;  
    result = a + b;                             // a & b are Parameters
    return result;
}