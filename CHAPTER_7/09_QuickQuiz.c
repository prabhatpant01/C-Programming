//Create a 2-d array by taking input from the user.Write a display function to print the conent of this 2-d array on the screen?
#include<stdio.h>
int display(int students, int subjects){
    int marks[students][subjects];
    for(int i=0; i<students; i++){
        for(int j=0; j<subjects; j++){
            printf("The marks of student %d in subject %d is : %d\n", i+1, j+1, marks[i][j]);
        }
    }
}

int main(){
    int m =2;
    int n =3;
 
    int marks[2][3];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Enter the marks of student %d in subject %d :\n", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    
    return 0;
}
