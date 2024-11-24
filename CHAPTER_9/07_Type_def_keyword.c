#include<stdio.h>
#include<string.h>
// typedef lgake hume struct employee likhne ki jaruarat nhi hai...sirf (emp) ek nick name bna skte h.
typedef struct employee{
    int code;
    float salary;
    char name[10];
} emp; // yha peee

void show(struct employee emp1){
printf("The code of employee is: %d\n", emp1.code);
printf("The Salary of employee is: %f\n", emp1.salary);
printf("The Name of employee is: %s\n", emp1.name);

}

int main(){
    //Declaring e1 and ptr

    emp e1;
    emp *ptr;

    //pointing ptr to e1
    ptr = &e1;

    //Set the number values for e1
    ptr->code = 101;
    ptr->salary = 55.2;
   strcpy(ptr->name, "Sonu");

   show(e1);

    return 0;
}