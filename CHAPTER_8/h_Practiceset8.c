//Write a program to check whether a given character in present in a string or not.
#include<stdio.h>

int main(){
    char str[10], n;
    int i, f=0;
    printf("Enter String\n");
    gets(str);

    printf("Enter the character which you want to search\n");
    scanf("%c", &n);

    for(i=0; str[i]!='\0'; i++){
        if(str[i]==n){
            f=1;
            break;
        }
    }
    if(f==1)
    printf("Character is present in string\n");
    else
    printf("Character is not present in a string\n");
    
    return 0;
}