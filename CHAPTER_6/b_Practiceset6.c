// Write a program having a variable i. Print the address of i. Pass this variable to a program to a function and print its address . Are this address same? why?
#include<stdio.h>
void printadd(int a){// prototype definition direct kr skte hai...
    printf("The address of variable a is %u\n", &a);
}


int main(){
    int i =4;
    printf("The value of variable i is %u\n", i);
printadd(i);
    printf("The address of variable i is %u\n", &i);
    return 0;
}

// dekho isme address diferent hoga because ye call by value hai or isme humne copy dii hai mtlb alag alag adress hoga.. humne adress pass thodi kraya hai 
