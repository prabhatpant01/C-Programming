#include<stdio.h>

int main(){
    FILE *ptr;
    char c;
    ptr = fopen("05_getc_demo.txt", "r");
    c = fgetc(ptr);
    while(c!=EOF){  //1. EOF means--->END OF FILE.2. kya wo ant hai file ka ..agr nhi to loop chalao
        printf("%c", c);
        c = fgetc(ptr);
    }
    return 0;
}