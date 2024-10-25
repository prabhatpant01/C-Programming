#include<stdio.h>
int fibonacci(int num);

int main(){
int num;// variables to store how many elements to be displayed in the series 
    printf("Enter the number of elements to be in the series:");
    scanf("%d", &num);// taking user input

    for(int i=0; i<num; i++){
        printf("%d", fibonacci(i));// calling fibonacci() function for each iteration and printing the returned value 
    }

    return 0;
}

int fibonacci(int num){// Function definition
    if (num == 0){// First base condition check
        return 0;// returning 0, if codition meets
    }
    else if// Second base condition check
        (num == 1){
            return 1;// returning 1, if codition meets
        }
    else{// else calling the fibonacci() function recursively till we get to the base conditions 
        return fibonacci(num - 1) + fibonacci(num -2);// recursively calling the fibonacci() function and then adding them
    }
}