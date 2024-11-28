// Write a program to dynamically create an array of size 6 capable of storing 6 integers.
#include<stdio.h>
#include<stdlib.h>


int main(){
    int *arr;
    arr = (int *) malloc(6 * sizeof(int));
    //dynamically allocate memory for 6 integers.

    for(int i=0; i<6; i++){
        printf("Enter the value of %d integer is :\n", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<6; i++){
    printf("The value of %d integer is : %d\n", i, arr[i]);
    }
    return 0;
}