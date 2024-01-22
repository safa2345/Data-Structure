#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
struct node{

int data;
node* left;
node* right;

};
 node* create_node(int data)
{

     struct node *new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = data;
    new_node->left =NULL;
    new_node->right= NULL;

    return new_node;
}

node* tree(node *&root,int data)
{
    if(root==NULL)
    {
        root=create_node(data);
    }
    else if(root->data>data)
    {
        tree(root->left,data);
    }
    else{
        tree(root->right,data);
    }
}
node *display(node *root)
{
    if(root!=NULL)
    {

        display(root->left);
        printf("%d\t",root->data);
        display(root->right);
    }

}
int main()
{
  int n,p;
  scanf("%d",&n);

   node *root=NULL;

   for(int i=0;i<n;i++){
        scanf("%d",&p);
        tree(root,p);
   }

   display(root);

   return 0;



}


