// What will the following line produce in a C program:
// printf("%d %d %d\n", a, ++a, a++);

#include<stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d\n", a, ++a, a++);// printf mai arguments RIGHT to LEFT jate hai <---------- ans.. 6 6 4 ayega
    return 0;
}