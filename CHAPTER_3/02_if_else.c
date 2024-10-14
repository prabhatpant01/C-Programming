#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age here");
    scanf("%d", &age);

    if (age >= 70)
    { /* (>=)Greater than or equal to
         (==)Equal
         (<=)Less than equal to
         (!=)Not equal to  */
        printf("You are above 70 so you cannot Drive");
    }
    else
    {

        printf("You can Drive \n");
    }

    if (age >= 18)
    if (age <= 21)
    {
        printf("you are eligible for Indian Army\n ");
    }

    else
    {
        printf("you are not eligible for Indian Army\n");
    }
   

    if (age != 18){
        printf("you are under age so you are not eligible \n");
    }
    
    if (age == 50){
printf("HALF CENTURY");
    }
    
     return 0;
}