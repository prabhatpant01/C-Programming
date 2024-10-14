#include<stdio.h>

int main(){
    int num;

    printf("Enter your number\n");
    scanf("%d", & num);

if(num==1){
printf("Your number is 1\n");

}
else if (num ==2){
printf( "Your number is 2\n");

}
else if (num ==3){                              // kitne bhi else if laga skte hai ...
printf( "Your number is 3\n");

}
else {                                          // last else is an optional
printf("Its not 1,2 or 3");

}


    return 0;
}