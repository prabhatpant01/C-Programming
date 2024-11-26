//Write a program to read a text file charater by character and write its content twice in a separate file ...
#include<stdio.h>

int main(){
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("c_Textfile_01.txt", "r");
    ptr2 = fopen("c_Textfile_02.txt", "w"); 

    char c = fgetc(ptr1);    // fgetc for 1 character read...
    while(c!=EOF){
        fputc(c, ptr2);      // fputc for 1 character write...
        fputc(c, ptr2);    // dubara se wahi character write kroo...(mtlb twice)
        c = fgetc(ptr1);
    }

    fclose(ptr1);
    fclose(ptr2);
    return 0;
}
