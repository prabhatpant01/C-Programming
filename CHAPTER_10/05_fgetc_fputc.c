// //fgetc⬇️ read krne kai kaam ata hai 1 character...
// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     ptr = fopen("05_getc_demo.txt", "r");
//     char c = fgetc(ptr);
//     printf("The value of my character is :%c\n", c);
// // similarly print characters many times.By usig fgetc()

//     printf("The value of my character is :%c\n", fgetc(ptr));
//     printf("The value of my character is :%c\n", fgetc(ptr));
//     printf("The value of my character is :%c\n", fgetc(ptr));
//     printf("The value of my character is :%c\n", fgetc(ptr));

//     return 0;
// }


// fputc⬇️ write krne kai kaam ata hai 1 character...
#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("05_putc_demo.txt", "w");
    putc('C', ptr);
    putc('A', ptr);
    putc('T', ptr);

    fclose(ptr);
    return 0;
}