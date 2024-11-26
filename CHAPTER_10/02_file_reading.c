#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("02_sonu.txt", "r"); // file open
    int num;
    int num2;
    int num3;
    
    fscanf(ptr, "%d", & num);
    fscanf(ptr, "%d", & num2);
    fscanf(ptr, "%d", & num3);
    fclose(ptr); // file close
    printf("The value of num is %d\n", num);
    printf("The value of num2 is %d\n", num2);
    printf("The value of num2 is %d\n", num3);
    
    return 0;
}
