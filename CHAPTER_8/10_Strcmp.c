#include<stdio.h>
#include<string.h>

int main(){
    char st1[45] = "Sonu";
//  char *st2 = "Saiyam";    
    char st2[32] = "Saiyam";    
    int val = strcmp(st1, st2);
//This function is used to compare two strings. It returns: 0 if strings are equal
//Negative value if first string's mismatching character's ASCII value is not greater than
//second string's corresponding mismatching character. It reeturns positive values otherwise.    
    printf("Now the val is %d", val);
    return 0;
}