#include <stdio.h>
#include <stdlib.h>
void selectionsort(int arr[]){
    int smallest=arr[0];
    int small_index=0;
    int i,j,temp;
    for( i=0;i<5;i++){

            small_index=i;
    for ( j = i + 1; j < 5; j++) {
            if (arr[j] < arr[small_index]) {
            small_index= j;
        }
        }

        temp = arr[small_index];
        arr[small_index] = arr[i];
        arr[i] = temp;
    }
    }
int main(){
     int arr[5]={5,8,2,1,9};
     selectionsort(arr);
     for(int i=0;i<5;i++){
     printf("%d\n",arr[i]);
     }
     }
