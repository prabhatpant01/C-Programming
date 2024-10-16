// same as question 5 using for & do while loop..
#include<stdio.h>

int main(){
    int i =1, sum =0, n=10;

for(i=1; i<=n; i++){
    sum +=i;
 } 

/*do{
      sum +=i;
      i++;
   
}while(i<=n); */

    printf("The value of sum (1 to 10) is %d", sum);
    return 0;
  } 