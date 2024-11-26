    #include<stdio.h>

    int main(){
        FILE *fptr;
        int number = 545;
        fptr = fopen("04_generated.txt", "w");
        fprintf(fptr,"The number is %d\n", number);
        fprintf(fptr,"Thanks for using fprintf", number);

        fclose(fptr);
        return 0;
    }