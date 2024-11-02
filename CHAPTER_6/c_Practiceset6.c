//Write a program to change the value of a variable to ten times of its current value. Write a function and pass the value by reference
void change(int *i);
#include<stdio.h>

int main(){
int i;
printf("Enter the value of i:");
scanf("%d", &i); 
change(&i);
printf("Ten times of the given number is: %d", i);
    return 0;
}

void change(int *i){
*i = *i * 10;// *i is a value at address operator...
}
