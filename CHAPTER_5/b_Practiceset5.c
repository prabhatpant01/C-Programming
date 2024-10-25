//Write a function to convert Ceksius temperature into faherhneit
#include<stdio.h>
 float convert(float celsius , float  fahrenheit);

int main(){
    float celsius,fahrenheit;
printf("Enter temperature in celsius:\n");
scanf("%f", &celsius);
fahrenheit=convert(celsius ,fahrenheit);
printf("Value of fahrenheit is %f\n", fahrenheit);
    return 0;
}

 float convert(float celsius ,float  fahrenheit){
    fahrenheit = (float)((celsius * 9/5) + 32);
    return ((celsius * 9/5) + 32);
 }
