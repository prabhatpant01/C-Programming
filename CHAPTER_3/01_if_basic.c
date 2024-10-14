// C Programming to check whether a number is Even or Odd
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    if (a % 2 == 0)   // iska mtlb hai kii agr a divide hojaye 2 se yaa equal ho jaye 0 ke. too printf krdo
    {
        printf("%d number is Even\n");
    }
    //else is an optional statement.
    else
    {
        printf("%d number is odd");
    }

    return 0;
}