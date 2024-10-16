//Write a program to print first n natural numbers using for loop...
#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    
    for(int a=0; a<n; a++){
printf("The first n natural numbers is %d\n", a+1);

    }
    return 0;
}