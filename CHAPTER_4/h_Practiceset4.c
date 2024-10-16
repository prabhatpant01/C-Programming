// Q. Write a program to check whether a given no. is prime or not using loops.
#include <stdio.h>

int main()
{
    int n = 4, prime = 1;      // where n is a number... change n to run the program
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }

    return 0;
}