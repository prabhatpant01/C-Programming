#include<stdio.h>
void change(int a);

int main(){
int b = 345;
printf("The value of b before change is %d\n", b);
change(b);                                            // Function call
printf("The value of b after change is %d\n", b);
    return 0;
}

void change(int a){    // Function definition or agr hum int'b'bhi krle too bhi uppar wale'b'se niche wale ka koi mtlbb nhi h.
    a = 77;
}