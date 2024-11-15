//Repeat problem (f_Practiceset7.c) for a custom input given by the user.

#include<stdio.h>
void printTable(int *mulTable, int num, int n){
    printf("Enter multiplication table you want :\n", num);
    scanf("%d", &num);
    for(int i=0; i<n; i++){
        mulTable[i] = num*(i+1);
    }

    for(int i=0; i<n; i++){
        printf("%dx%d = %d\n", num, i+1, mulTable[i]);
    }
    printf("*****************************************\n\n");
}

int main(){
    int mulTable[3][10];
    printTable(mulTable[0], 1, 10);
    return 0;
}