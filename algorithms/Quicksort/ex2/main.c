#include <stdio.h>
#include <stdlib.h>
int countarr(int arr[]){

   if (arr[0]==NULL){
    return 0;
   }
   else {

     return 1+countarr(arr+1);
   }
   }

int main()
{
  int arr[]={9,7};
  int res=countarr(arr);
  printf("%d",res);

}
