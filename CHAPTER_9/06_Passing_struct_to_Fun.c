#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

void show(struct employee emp){
printf("The code of employee is: %d\n", emp.code);
printf("The Salary of employee is: %f\n", emp.salary);
printf("The Name of employee is: %s\n", emp.name);

}
int main(){
    struct employee e1;
    e1.code = 101;
    e1.salary = 55.2;
   strcpy(e1.name, "Sonu");

    show(e1);

    return 0;
}