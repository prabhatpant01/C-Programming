/*#include<stdio.h>

int main(){
    for(int i=5; i; i--){
  printf("%d\n", i);          // This for loop will keep on runninng until i becomes 0.
    }
    return 0;
}
*/
// Write a program to print n natural numbers in reverse order...

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for(int a=n; a; a--){
        printf("The value of a is %d\n",a );
    }
    return 0;
}