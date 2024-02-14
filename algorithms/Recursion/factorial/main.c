#include <stdio.h>
#include <stdlib.h>
int fact(int x){
if (x==1){
return 1;
}
else {
return x*fact(x-1);
}
}
int main()
{
   int x;
   printf("enter the number:\n");
   scanf("%d",&x);
   int factor=fact(x);
   printf("%d",factor);
}
