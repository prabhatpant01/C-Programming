// Create a two dimensional vector using structures in C.   
#include<stdio.h>

struct vector{
    int x;
    int y;
};

int main(){
    struct vector v1, v2;
    v1.x =24;
    v1.y =34;
    printf("X dimension is %d and Y dimension is %d\n",v1.x , v1.y);

    v2.x =46;
    v2.y =56;
    printf("X dimension is %d and Y dimension is %d\n",v2.x , v2.y);
    return 0;
}