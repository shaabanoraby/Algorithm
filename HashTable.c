#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
struct table {
char produce[20];
int cost;
};


 struct table* array[SIZE];



 /* return index in array*/
 int hashfunction(char produce[20]){
 return produce[20]% SIZE;
 }

/*to add new element*/
 void add(char produce[20],int cost){
 /*var to recive return of hashfunction*/
 int hashindex=hashfunction(produce);
 /*to store size of struct in heap memory*/
 struct table* newitem=(struct table*)malloc(sizeof(struct table));

   for(int i=0;i<20;i++){
      newitem->produce[i]=produce[i];
   }
  newitem->cost=cost;
   array[hashindex]=newitem;
}

/*function to search element*/
 int search(char produce[20]){
     /*var to recive return of hashfunction*/
 int hashindex=hashfunction(produce);

 if (array[hashindex]->produce[0]==produce[0]){
    return array[hashindex]->cost;
 }
 }


int main(){
 struct table* item=(struct table*)malloc(sizeof(struct table));

add("avokado",40);
add("apple",70);

for(int i=0;i<SIZE;i++){
    if(array[i]!=NULL)
    printf("%s\n=%d\n",array[i]->produce,array[i]->cost);
}
int res=search("apple");
printf("%d\n",res);

}
