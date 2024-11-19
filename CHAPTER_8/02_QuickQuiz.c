//Create a string using "" and print its content using a loop.
#include<stdio.h>

int main(){
//  char str[]= {'S','O','N','U','B','H','A','I', '\0'};
    char st[] = "SonuBhai";
    char *ptr = st;
    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}