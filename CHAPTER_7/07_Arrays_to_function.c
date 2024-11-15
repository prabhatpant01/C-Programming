#include<stdio.h>
    // void printarray(int *ptr, int n){        // function defintion
    //     for(int i=0; i<n; i++){
    //         printf("The value of element %d is: %d\n", i+1, *(ptr+i));
    //     }
    // }

   void printarray(int ptr[], int n){        // function defintion
        for(int i=0; i<n; i++){
           printf("The value of element %d is: %d\n", i+1, ptr[i]);
         }
     }  

int main(){
int arr[] = {1, 2, 32, 34, 44, 56, 76, 43};
printarray(arr, 8);                        // Function call..
    return 0;
}