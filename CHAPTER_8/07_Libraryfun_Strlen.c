#include<stdio.h>
#include<string.h>// include Header file to calculate length of string.

int main(){
    char *st= "Sonu";// "Sonu"----> 4 characters
    int a = strlen(st);
//This function is used to count the number of characters in the string excluding the null('\0') character.
    printf("The length of string is %d", a);
    return 0;
}