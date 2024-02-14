#include <stdio.h>
#include <stdlib.h>
int  sumarr(int arr[],int size){

          if (size==1){
           return arr[0];
      }
      else {

           return arr[size-1]+sumarr(arr,size-1);
      }

      }
int main()
{
    int array[]={1,8,9,3,4};
    int res=sumarr(array,5);
    printf("%d",res);

}
