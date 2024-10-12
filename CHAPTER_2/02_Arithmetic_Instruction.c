#include <stdio.h>
# include <math.h>

int main()
{
    int a = 5;
    int b = 6;
   
    // Operands can be int / float etc.
    // +, -, *, / ➡️are Arethmatic Operators.

    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);

     int z;
    z = b * a; // legal
    //  b * a = z; // illegal

    printf("The value of z is %d\n", z);

printf("5 when divided by 2 leaves a remainder of %d\n", 5%2);
printf("5 when divided by 2 leaves a remainder of %d\n", -5%2);
printf("5 when divided by -2 leaves a remainder of %d\n", 5%-2);

//No operator is assumed to be present
//printf("The value of 4 * 5 is  %d\n", 4.5);   --> // Wrong will not return 20
printf("The value of 4 * 5 is  %d\n", (4)*(5));   // Right

// There is no operator to perform exponentiation in C.
printf("The value of 4 ^ 5 is  %d\n", 4^5); 
// 4 to the power 5 is 1024 but we find 1 because (^) it is a bitwise XOR operator

printf("The value of 4 to the power  5 is  %f\n", pow(4,5)); 
// agr hame power nikalna hai too (pow), %f and #include <math.h> likhna hoga.

printf("The value of 6 + 5.5 is %f\n", 6 + 5.5);      //---> INTEGER + INTEGER = INTEGER
printf("The value of 6 + 5.5 is %f\n", 6 + 5.5);       //---> INTEGER + FLOAT = FLOAT
printf("The value of 6.2 + 5.5 is %f\n", 6.2 + 5.5);    //---> FLOAT + FLOAT = FLOAT

printf("The value of 5/2 is %d\n", 5/2);
printf("The value of 3.0/9 is %d\n", 3.0/9 );

    return 0;
}