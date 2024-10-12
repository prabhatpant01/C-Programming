#include <stdio.h>

int main()
{
    int x = 4;
    int y = 6;
/*C language mai BODMAS use nhi hota 
yha pe arithmetic operators ki priorties hoti hai ki phle konsa hoga
PRIORITY      OPERATORS 
   1           *, /, % 
   2             +, -
   3              =         YE 3 Priorities hai */

printf("The value of 3*x - 5*y is %d\n", 3*x - 5*y ); // ye to right hai 

printf("The value of 8*y / 3*x is %d\n", 8*y / 3*x ); 
// 8*6 / 3*4 = 48/12 will give wrong answer
// 48/3*4
// 8*2              [*,/,left to right associativity]
// 16
// So we use paranthesis to find our ans like ⬇️.

printf("The value of 8*y / 3*x is %d\n", (8*y) / (3*x) ); // will produce right ans.

    return 0;
}


                        // 03_control_instruction iske bare mai hum aage pdenge 