#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c", & ch);
    
     // 97 - 122 = a-z lowecase hota hai ASCII(American standard code for information interchange) ke anusar.
    if(ch<=122 && ch>=97){       
    printf("It is lowercase");
    }
else{
    printf("It is not lowercase");
}
    
    return 0;
}