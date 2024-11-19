//Write your own version of strcpy() function from <string>..
#include<stdio.h>
#include<string.h>

int main(){
    char name1[] = "Sonu";
    char name2[] = "Subhi";
strcpy(name1, name2);
printf("name1 : %s", name1);
printf("\nname2 : %s", name2);
    return 0;
}