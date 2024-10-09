#include<stdio.h>

int main(){
    int celsius = 37, farenheit;
    // int ko hum float bhi likh sakte hai agr value hame decimal mai value lani hai too.... okk brooo😁

    farenheit = (celsius * 9/5)+ 32;
    // ye celsius ko farenheit mai convert krne ka formula hai...

    printf("The value of this celsius temperature into farenheit is %d ", farenheit);

    return 0;
}