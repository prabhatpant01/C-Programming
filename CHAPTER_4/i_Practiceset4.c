// Implement previous question (check whether the given no. is prime or not) for other type of loops.
#include <stdio.h>

int main()
{
    int n = 2, i = 2, prime = 1;
    while (i < n)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
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
