//Write a program to decrypt a string encrypted using encrypt function  in problem 6.
#include<stdio.h>
void decrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main(){
    char c[] = "!Ibcjcj!Dpnf!up!Vuubsbliboe!";
    decrypt(c);
    printf("Decrypted string is : %s", c);
    return 0;
}