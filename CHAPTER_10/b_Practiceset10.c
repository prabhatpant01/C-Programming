//Write a program to generate multiplication table of a given number in text format.Make sure that the file is readable and well formatted...
#include<stdio.h>

int main(){
    FILE *ptr;
    int num;

    printf("Enter the integer you need the table of : \n");
    scanf("%d", &num);
     ptr = fopen("b_Table.txt", "w");

    for(int i=0; i<10; i++){
        fprintf(ptr, "%d x %d = %d\n", num , i+1, num*(i+1));

    }
    fclose(ptr);
    printf("Successfully generated table of %d to b_Table.txt\n", num);
    return 0;
}