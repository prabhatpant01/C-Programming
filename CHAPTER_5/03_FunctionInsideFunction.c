#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main(){
goodmorning(); // yha main nai directly gooodmorning(); ko call kiya
return 0;
}

void goodmorning(){
    printf("Good Morning Sonu\n");
    goodafternoon(); // or yha pe goodmorning(); ne indirectly goodafternoon(); ko call kiya
}
void goodafternoon(){
    printf("Good Afternoon Sonu\n");
    goodnight(); // or yha pe  bhi goodafternoon(); ne indirectly goodafternight(); ko call kiya
}

void goodnight(){
    printf("Good Night Sonu\n");
}