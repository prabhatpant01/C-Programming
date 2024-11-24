#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee DIYU = {100, 34.45, "DIYU"};
    
    printf("Code is: %d \n", DIYU.code);
    printf("Salary is: %f \n", DIYU.salary);
    printf("Name is: %s \n", DIYU.name);

   return 0;
}