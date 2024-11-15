//Write a program containing functions which counts the number of positive integers in an array.
#include<stdio.h>

int main(){
    int size;
    int a[10];
    int Positive_count =0, Negative_count;
    printf("Please enter the size of an array :\n");
    scanf("%d", &size);

    printf("Please enter the array Elements :\n");
    for(int i=0; i<size; i++){
    scanf("%d", &a[i]);
    }

    for(int i=0; i<size; i++){
    if(a[i] >= 0){
        Positive_count++;
    }
        // else{
        //     Negative_count++;
        // }
    }

    printf("Total number of Positive numbers in this array = %d\n", Positive_count);
   // printf("Total number of Negative numbers in this array = %d\n", Negative_count);

    return 0;
}