//Write your own version of strlen function from <string.h>...
#include<stdio.h>
int strlen(char *st){
    char *ptr= st;
    int len=0;
    while(*ptr!= '\0'){
        len++;
        ptr++;
    }
    return len; // len ko return kiya..
}
int main(){
    char st[]= "SonuBhai";
    int l= strlen(st);
    printf("The length of this string is %d", l);
    return 0;
}