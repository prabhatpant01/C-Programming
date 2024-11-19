#include<stdio.h>

int main(){
    char s[32];
    printf("Enter your name here: ");
    gets(s); // it is a function which can be used to a multi-word string.
   // puts(s); // it can be used to output a string
    printf("Your name is %s", s);
    return 0;
}