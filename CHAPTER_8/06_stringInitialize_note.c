#include<stdio.h>

int main(){
 char *ptr= "Saiyam pant";    
 //char ptr[]= "Saiyam pant"; 
 //⬆️This doesn't change name: because once a string is defined using char ptr[] = "Saiyam pant",it cannot
 //be re-initialized to something else.
 ptr = "Sonu pant";
 printf("%s", ptr);
    return 0;
}