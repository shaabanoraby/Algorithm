#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[5]={5,10,25,33,48};
int low=0,high=4,mid,item,guess;
scanf("%d",&item);
while (low <=high){
       mid =(low+high)/2;

    if (item == arr[mid]){
        guess=mid;
        break;

    }
    else if (item<arr[mid]){
        high =mid-1;
    }
    else if (item>arr[mid]){
        low=mid+1;
    }
    else {
        printf("NULL\n");
    }

}

    printf("the search is %d\n",guess);
}

