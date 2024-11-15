#include<stdio.h>

int main(){
    int n_students = 2;// means number of students
    int n_subjects = 5;// means number of subjects
    int marks [2][5];
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            printf("Enter the marks of student %d in subjects %d\n", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    
     for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            printf("The marks of student %d in subjects %d is: %d\n", i+1, j+1, marks[i][j]);
        }
    }
    return 0;

}