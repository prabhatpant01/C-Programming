#include<stdio.h>

int main(){
//String is an array of characters, it can be initialized as follows:
    char str[]= {'S','O','N','U', '\0'}; // '\0' is a null character..
//There is another shortcut for initializing strings in a C language:    
    char str2[]= "Sonupant";
    printf("%s,%s", str,str2); // where "%s"(format specifier) <-------> is used for String
    return 0;
}