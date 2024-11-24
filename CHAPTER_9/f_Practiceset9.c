// Create a structure representing bank account a customer. What fields did you use and why?
#include<stdio.h>

struct customer{
    int accnum;
    char name[20];
    float money;
    int year;
};

int main(){
    struct customer c1;
    printf("Enter the account number :");
    scanf("%d", & c1.accnum);
    printf("Enter the name of the account holder :");
    scanf("%s", c1.name);
    printf("Enter the ammount of the money in account :");
    scanf("%f", & c1.money);
    printf("Enter the year of creation of account :");
    scanf("%d", & c1.year);

    printf("\n");

    printf("Account number : %d\n", c1.accnum);
    printf("Account holder name : %s\n", c1.name);
    printf("Account Money : %.2f\n", c1.money);
    printf("Account creation year : %d\n", c1.year);
    
    
    return 0;
}