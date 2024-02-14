#include <stdio.h>
#include <stdlib.h>
void greet(char arr[]){
  printf("hello,%s\n",arr);
  greet2(arr);
  printf("getting ready to stay bye\n");
  bye();
}
void greet2(char arr[]){
printf("how are you %s\n",arr);
}
void bye(){
printf("ok bye\n");
}
int main()
{
    char arr[]={'s','h','a','a','b','a','n'};
    greet(arr);

}
