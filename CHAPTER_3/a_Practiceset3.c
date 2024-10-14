#include<stdio.h>

int main(){
    int a = 10;  

    if (a = 11)           // (=) is a assignment operator , Its not equality (==) check 
    printf("I am 11");   //NOTE:yha pe {}curly braces uses nhi hua kyunki humne sirf 1 statement likhi hai printf wali
    // but agr hum jada statement lihte hai too curly braces{} use krenge
    else                               
    printf("I am not 11");

    return 0;
}