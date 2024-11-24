//Write a program to illustrate the use of arrow operator -> in C..
#include<stdio.h>
#include<string.h>

struct employee{
int code;
float salary;
char name[10];
};

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;

  //  e1.code = 201;
  //  e1.salary = 40.0;
  //  strcpy(e1.name, "Prabhat");

// you can also use:⬇️

    ptr->code = 201;
    ptr->salary = 40.0;
    strcpy(ptr->name, "Prabhat");

    printf("%d\n", ptr->code);
    printf("%f\n", ptr->salary);
    printf("%s\n", ptr->name);

    return 0;
}