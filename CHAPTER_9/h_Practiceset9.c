//Solve problem 9 for time using typedef keyword.
#include<stdio.h>

typedef struct time{
    int hour;
    int minute;
    int second;

}time;

void display(time t){
    printf("The time is : %d/ %d/ %d\n", t.hour, t.minute, t.second);
}

int timeCmp(time t1, time t2){
//Make decision on the basis of second comparison
if (t1.second > t2.second){
    return 1;

}
if (t1.second < t2.second){
    return -1;
}

//Make decision on the basis of Minute comparison
if (t1.minute > t2.minute){
    return 1;

}
if (t1.minute < t2.minute){
    return -1;
}  

//Make decision on the basis of hour comparison
if (t1.hour > t2.hour){
    return 1;

}
if (t1.hour < t2.hour){
    return -1;
}    
    return 0;

}

int main(){
    time t1 = {12, 02, 11};
    time t2 = {11, 02, 12};
    display (t1);
    display (t2);
    int a = timeCmp(t1, t2);
    printf("Time comparison function returns : %d", a);

    return 0;
}