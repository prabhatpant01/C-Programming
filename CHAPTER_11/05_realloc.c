// realloc is used to allocate memory of new size using the previous pointer and size...
// realloc sai previous pointer and size ko reuse kr skte hai..

#include<stdio.h>
#include<stdlib.h>


int main(){
    int *ptr;
    ptr = (int *) malloc(6 * sizeof(int));
    
    for(int i=0; i<6; i++){
        printf("Enter the value of %d element : \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<6; i++){
        printf("The value of %d element is : %d\n", i, ptr[i]);
    }



    //Reallocate ptr using realloc()
    ptr = realloc(ptr,  10 * sizeof(int));
    
    for(int i=0; i<10; i++){
        printf("Enter the value of %d element : \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<10; i++){
        printf("The value of %d element is : %d\n", i, ptr[i]);
    }
    return 0;
}