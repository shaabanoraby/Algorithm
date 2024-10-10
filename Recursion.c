#include <stdio.h>
#include <stdlib.h>
 void countdown(int i){
 printf("%d\n",i);
 if (i<=1){
    return ;
 }
 else {
    countdown(i-1);
 }
 }
int main()
{
   int i=0;
   countdown(3);
   printf("%d\n",i);
}
