#include<stdio.h>
#include<string.h>

int main(){
    char *st = "Redmi";
    char st2[32];
    strcpy(st2, st);
//This function is used to copy the content of second string into first string passed to it.    
    printf("Now the st2 is %s", st2);
    return 0;
}