#include <stdio.h>

int main()
{
    int length, breadth;

    printf("What is the length of a rectangle\n");
    scanf("%d", &length);

    printf("What is the bredth of a rectangle\n");
    scanf("%d", &breadth);

    printf("Area of your rectangle is %d\n", length * breadth);

    return 0;
    
}