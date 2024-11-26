// Write a program to read three integers from a file..
#include<stdio.h>

int main(){
    FILE *ptr;
    int a, b, c;
 
    ptr = fopen("a_Practiceset10.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
   
    fclose(ptr);

    printf("The first integer is : %d\n", a);
    printf("The second integer is : %d\n", b);
    printf("The third integer is : %d\n", c);

    return 0;
}