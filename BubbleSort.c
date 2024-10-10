#include <stdio.h>
#include <stdlib.h>
void bubblesort(int arr[],int size){
int i,j,temp;
for(i=0;i<size;i++){
    for(j=0;j<size;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}

}
int main()
{
int arr[]={8,9,7,4,5,2};
bubblesort(arr,6);
for(int i=0;i<6;i++){
    printf("%d\n",arr[i]);
}






}
