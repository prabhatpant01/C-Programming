//Write a program containing a function which reverses the array passed to it.
#include<stdio.h>
void reverse(int *arr, int n){
  int temp;
    for(int i=0; i<(n/2); i++){   // n/2 krne se he reverse hoga.
      temp = arr[i];
      arr[i] = arr[n-i-1];
      arr[n-i-1] = temp;
    }
}
int main(){
  int arr[] = {1, 2, 3, 4 ,5 ,6 ,7 , 8};
  reverse (arr, 8);
  for(int i=0; i<8; i++){
    printf("The value of %d element is : %d\n", i, arr[i]);
  }  
    return 0;
}