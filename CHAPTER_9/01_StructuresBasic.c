#include<stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[10];
};

int main(){
   int a= 34;
   float b= 54.3;
   char c= 'h';
// employee e1;
//  e1.salary = 5487.6; -------> Wont wont work without employee structure
    
    struct employee e1;
    e1.code = 743;    // -------->(.)its a member operator or dot operator..
    e1.salary = 65.62;
//  e1.name = "Sonu"; -----> wont work without string or strcpy()...
    strcpy(e1.name, "Sonu");

    printf("%d\n", e1.code);
    printf("%.2f\n", e1.salary);
    printf("%s\n", e1.name);

    return 0;
}