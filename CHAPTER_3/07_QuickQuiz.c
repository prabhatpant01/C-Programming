/*Write a program to find grade of a student given his marks based on below:
90 - 100 ---A
80 - 90  ---B 
70 - 80  ---C
60 - 70  ---D
< 60     ---E */

#include<stdio.h>

int main(){
    int num;
printf("Enter a number\n");
scanf("%d", &num);

if((num>=90) && num<=100){
    printf("A grade\n");

}
else if(num>=80 && num<=90){
    printf("B grade\n");
}
else if(num>=70 && num<=80){
    printf("C grade\n");
}
else if(num>=60 && num<=70){
    printf("D grade\n");
}
else if(num>=60 && num<=70){
    printf("E grade\n");
}
    return 0;
}