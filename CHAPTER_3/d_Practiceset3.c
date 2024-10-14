#include<stdio.h>

int main(){
    int year;
    printf("Enter Year\n");
    scanf("%d", &year);

    if(year%4 == 0 && year%100 != 0 || year%400 == 0)
    {
printf("This year is a leap year %d\n", year);
    }
    else{
printf("Ths is not a leap year %d\n",year);
    }
    return 0;
}