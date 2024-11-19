//Write a function to slice() to slice a string. It should change the original string such that it is now the slice string. Take m & n as the start & ending positon for slice.
#include<stdio.h>
void slice(char *st, int m, int n){
    int i =0;
    while((m+i)<n){
        st[i] = st[i+m];
        i++;
    }
    st[i] = '\0';
}

int main(){
   char st[] = "sonubhai";
   slice(st, 1, 4);
   printf("%s", st);
    return 0;
}