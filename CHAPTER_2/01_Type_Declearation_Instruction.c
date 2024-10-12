#include <stdio.h>

int main()
{
    //     // int a = 5; (1.Type declaration instruction)
    // int a = 5 , b , c;   // (Tppe declaration instruction)
    // b = c = a;

    // printf("The value of a is %d\n", a);
    // printf("The value of b is %d\n", b);
    // printf("The value of c is %d\n", c);

    // float b = a + 4.5;     (WRONG ❌ Because compiler dont know the value of a)
    // float a = 4.5;

    float a = 4.5; // (RIGHT)
    float b = a + 4.5;

    printf("The value of b is %f\n", b);

    return 0;
}