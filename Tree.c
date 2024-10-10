#include <stdio.h>
#include <stdlib.h>
/*
typedef struct node{
  int data;
  struct node* left;
  struct node* right;
}node;
void tree(int a,int b,int c)
{
    int root;
   if (a>b||a<b&&a<c||a>c){
     root =a;
   }
   else if (b>a||b<a&&b<c||b>c){
    root =b;
   }
   else {
     root= c;
   }


   if (root==a){
      if(a>b){
      struct node* left=b;
      struct node* right=c;
      }
      else {
         struct node* left=c;
        struct node* right=b;
      }
   }
   else if (root==b){
        if(b>a){
     struct node* left=a;
     struct node* right=c;
        }
        else {
              struct node* left=c;
              struct node* right=a;
        }
   }
   else {
        if(c>a){
      struct node* left=a;
      struct node* right=b;
        }
        else{
              struct node* left=b;
              struct node* right=a;
        }
   }


}
*/
   typedef struct node{
   int number;
   struct node* left;
   struct node* right;
   } node;

int main()
{
   node* tree=NULL;
   node* n=malloc(sizeof(node));
   if (n==NULL){
    return 1;
   }
   n->number=2;
   n->left=NULL;
   n->right=NULL;

   tree=n;

    n=malloc(sizeof(node));

if (n==NULL){
    return 1;
   }
   n->number=1;
   n->left=NULL;
   n->right=NULL;
   tree->left=n;

    n=malloc(sizeof(node));
if (n==NULL){
    return 1;
   }

   n->number=3;
   n->left=NULL;
   n->right=NULL;
   tree->right=n;

  print_tree(tree);
  print_tree(tree->left);
  print_tree(tree->right);
    return 0;
}


void print_tree(node* root){

if (root==NULL){
    return ;
}
printf("%d\n",root->number);






}


