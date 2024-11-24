#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee Agent[100];
    Agent[0].code = 101;
    Agent[0].salary = 600.4;
    strcpy(Agent[0].name, "KUMMU");

    Agent[0].code = 102;
    Agent[0].salary = 600.5;
    strcpy(Agent[0].name, "DIYU");

    Agent[0].code = 103;
    Agent[0].salary = 600.6;
    strcpy(Agent[0].name, "SONU");

printf("Done");

   return 0;
}