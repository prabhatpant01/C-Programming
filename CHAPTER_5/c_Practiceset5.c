//Write a function to calculate force of attraction on body of mass 'm' exerted by earth.... (g=9.8m/s)
#include<stdio.h>
float force(float mass);

int main(){
    float m;
printf("Enter the value of mass in kgs:\n");
scanf("%f", &m);
printf("The value of force in Newton is %.2f\n", force(m));//.2f ka mtlb hai ki ans point ke baad 2 decimal tk ayega
    return 0;
}

float force(float mass){
    float result = mass * 9.8;
    return result;
}
