//Repeat problem 2 for a general input provided by the user using scanf.
#include<stdio.h>

int main(){
    int n;
    printf("Enter which table you want:\n");
    scanf("%d", &n);
    int mul[10];
    for(int i=0; i<10; i++){
        mul[i] = n*(i+1);
    }
    for(int i=0; i<10; i++){
    printf("%d x %d = %d\n",n, i+1, mul[i]);
    }

    return 0;
}