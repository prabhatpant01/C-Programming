// calloc() stands for continious allocation...
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("How many integers do you want to enter : \n");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    for(int i=0; i<n; i++){
        printf("Enter the value of %d element :\n", i);
        scanf("%d", &ptr[i]);
    }

    // calloc() by default 0 se initialize krrta hai 
    for(int i=0; i<n; i++){
        printf("The value of %d element is : %d\n",i , ptr[i]);
    }
    
    return 0;
}