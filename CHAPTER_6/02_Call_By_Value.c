// Call by value ---> Sending the values of arguments..
#include<stdio.h>
int sum(int a , int b);

int main(){
    int a= 4, b=8;
    printf("The value of (4+8) is: %d\n", sum(a,b));
    return 0;
}

int sum(int a , int b){
// agar mai yha pee value change krdu a or b kii then:
    int c;
    c = a + b;
    a = 12;
    b = 10;
    return c;
// too bhi value change nhi hogi because call by value mai original value jo hai wahi hogi..
// ans (4+8) = 12 he ayega..
// return a+b;
}
