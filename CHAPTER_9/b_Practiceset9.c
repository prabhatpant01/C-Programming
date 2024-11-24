//Write a function Sum Vector which returns the sum of two vectors passed to it. The vectors must be two dimensional.
#include<stdio.h>
// typedef bhi use kr skte ho app ....
struct vector{
    int x;
    int y;
};
struct vector sumVector(struct vector v1, struct vector v2){
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main(){
    struct vector v1, v2, sum;
    v1.x =2;
    v1.y =3;
    printf("X dimension is %d and Y dimension is %d\n",v1.x , v1.y);

    v2.x =4;
    v2.y =5;
    printf("X dimension is %d and Y dimension is %d\n",v2.x , v2.y);

    sum = sumVector(v1, v2);
    printf("X dimension of result is %d and Y dimension is %d\n",sum.x , sum.y);

    return 0;
}