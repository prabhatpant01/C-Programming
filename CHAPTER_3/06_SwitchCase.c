#include<stdio.h>

int main(){
    int rating;
    printf("Enter your rating here: (1-5)");
scanf("%d",&rating);

switch(rating){                                   // rating is an integer-expression
case 1: 
printf("Your rating is 1\n");
break;                                            // it means break krdo statement ko yhi pee

case 2: 
printf("Your rating is 2\n");
break;                                           

case 3: 
printf("Your rating is 3\n");
break;                                           

case 4: 
printf("Your rating is 4\n");
break;                                           

case 5: 
printf("Your rating is 5\n");
break;                                           

default:
printf("Invalid Rating detected\n");
break;                                           

}

    return 0;
}