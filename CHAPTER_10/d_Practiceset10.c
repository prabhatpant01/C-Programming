// Write a program to modify a file containing an integer to double its value.
#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("d_Problem.txt", "r");
    fscanf(ptr, "%d", &num);
    printf("The value of an integer in d_Problem.txt is: %d\n ", num);

    FILE *fptr;
    fptr = fopen("d_Problem.txt", "w");
    num * 2;
   
    fprintf(fptr,"The double value of an integer in d_Problem.txt is: %d\n ", num*2);
    printf("The double value of an integer is generated in d_Problem.txt file");
    fclose(fptr);

    return 0;
}