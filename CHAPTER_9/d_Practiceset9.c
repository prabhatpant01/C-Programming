//Write a program with a structure representing complex number.
#include<stdio.h>

typedef struct complex{
    int real;
    int complex;
}comp;

int main(){
    comp cnums[5];
    for(int i=0; i<5; i++){
        printf("Enter the real value of for %d num\n", i+1);
        scanf("%d", &cnums[i].real);

        printf("Enter the complex value of for %d num\n", i+1);
        scanf("%d", &cnums[i].complex);
    }
   
    return 0;
}