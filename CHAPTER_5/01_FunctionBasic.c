#include <stdio.h>
void Sonu(); // Function prototype

int main()
{
    int a;
    printf("Initialising Sonu function\n");
    Sonu(); // Function call
    printf("Sonu function finished its work\n");
    return 0;
}
// Function definition⬇️
void Sonu()
{
    printf("This is Sonu\n");
}
