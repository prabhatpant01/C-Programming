#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("01_sample.txt", "r" );  //for reading the file.
    ptr = fopen("01_sample.txt", "w" );  //for writing to a file.
    ptr = fopen("01_sample.txt", "rb" ); //for reading in binary.
    ptr = fopen("01_sample.txt", "wb" ); //for writing in binary.
    ptr = fopen("01_sample.txt", "a" );  //open for append(kisi bhi file kai content kai aant mai content jodna).

    return 0;
}

// "r", "w", "rb", "wb", "a"....etc. are called modes. 