// Calculate the area of a square...
#include<stdio.h>
#include<math.h>

int main(){
    int side;
    printf("Enter the value of side\n");
    scanf("%d", &side);
    printf("The value of area is %f", pow(side,2));// %f isliye aya kyunki pow() double return krta h.

    return 0;
}