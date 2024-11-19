#include<stdio.h>
#include<string.h>

int main(){
    char st1[45] = "Sonu";
//  char *st2 = "Saiyam";    
    char st2[32] = "Saiyam";    
    strcat(st1, st2);// no space in between St1 or St2..
//This fuction is used to concatenate(sath mai jodna--> St1 ke sath St2 ko) two strings       
    printf("Now the st1 is %s", st1);
    return 0;
}