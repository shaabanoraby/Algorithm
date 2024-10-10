#include <stdio.h>
#include <stdlib.h>
void  quicksort(int arr[],int greater,int less){
    if (less<greater){
   int i=less,j=greater,temp;
   int pivot=arr[(less+greater)/2];
while(i<=j){
    while(arr[i]<pivot)i++;
        while(arr[j]>pivot)j--;
    if(i<=j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    }
     if (less< j) quicksort(arr, j, less);
     if (i < greater) quicksort(arr, greater, i);

    }
    }

int main()
{
int arr[]={8,9,2,5};

   quicksort(arr,3,0);
   for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");



    }
