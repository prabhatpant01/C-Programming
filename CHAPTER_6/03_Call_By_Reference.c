// Call by refernece ---> Sending the address of arguments..
#include<stdio.h>
void wrong_swap(int a , int b);
void swap(int *a , int *b);

int main(){
    int x= 4, y=8;
    printf("The value of x and y before swap is: %d and %d\n", x,y);
    wrong_swap(x , y);// will not work due to call by value..
    swap(&x , &y);// will work due to call by reference..// yha pe adress de diya gya hai.
    // ⬆️or yha pee dono koo call kiya gya hai😁..
    printf("The value of x and y after swap is: %d and %d\n", x,y);
    return 0;
}

void wrong_swap(int a , int b){
int temp;
temp = a;
a = b;
b = temp;
// ⬆️ ye wala value change nhi krega kyunki ye copy hai😟 mtlb call by value hai bro...
}

void swap(int *a , int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}