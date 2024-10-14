#include<stdio.h>

int main(){
    int Physcis, Chemistry, Maths;
    float Total;

    printf("Enter Physics Marks\n");
    scanf("%d", &Physcis);

    printf("Enter Chemistry Marks\n");
    scanf("%d", &Chemistry); 

    printf("Enter Maths Marks\n");
    scanf("%d", &Maths);
     
     Total= (Physcis + Chemistry + Maths)/3;
if((Total<40)|| Physcis<33 || Chemistry<33 || Maths<33 ){
    printf("Your total percentage is %f and you are failed\n", Total);
}
else{
    printf("Your total percentage is %f and you are Passed\n", Total);
}

    return 0;
}