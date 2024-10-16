//checks the condition and then executes the code...
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a");
    scanf("%d", &a);

    while (a < 20)
    // while(a > 10)             😂upto infinity loop...
    {
        printf("%d\n", a);
        a++; // a++ se compiler a ki value dubara check krta rhega
    }
    return 0;
}