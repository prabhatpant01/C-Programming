#include<stdio.h>

int main(){ 
//Q1. which of the following is invalid in C ?
//1. int a; b=a;
//2. int v= 3^3;
//3. char dt = '21 dec 2020'

    // int a; b=a;        Invalid
    int a; int b=a;        //valid
     int v = 3^3;          //valid 
//char dt = '21 dec 2020' Invalid

//Q2. what data type will 3.0/8 - 2 return?
//Ans2. C treat decimal 3.0/8 - 2 in double  or this gives float in return..

//Q3. write a program to check whether a no. is divided by 97 or not
int num;
printf("Enter the number/n");
scanf("%d", & num);
printf("Divisibility test returns: %d\n", num%97); // means what remainder gives for divisible

//Q4. Explain step by step evaluation of 3*x/y - z + k where x =2, y =3, z =3, k =1.
int x=2, y = 3, z = 3,
 k =1;
int Result = 3*x/y - z + k ;
// 6/3 - 3+1
// 2 - 3+1
// -1+1
// 0
printf("The value of result is %d\n", Result);

//Q5. 3.0 + 1 will be:
//a. Integer, b. Floating point numbers, c. Character.
//Ans. b(Floating point numbers)

    return 0;

}