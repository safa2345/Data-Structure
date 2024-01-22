#include<stdio.h>
#include <bits/stdc++.h>

struct node
{
    int data;
    struct node*next;


};
struct node*top=NULL;
void push(int x)
{
    struct node*temp=(struct node *)malloc(sizeof(struct node));


    temp->data=x;
    temp->next=top;
    top=temp;
    printf("added %d\n", x);

}
int pop()
{

    struct node*temp;
    if(top==NULL)
        return -1;

    temp=top;
    top=top->next;
    int i = temp -> data;
    free(temp);
    return i;


}
int isEmpty()
{

  return top==NULL;
}

int main()
{
    push(100);
    push(200);
    push(10);
    printf("Removed %d\n",pop());
    push(40);
    push(99);

    if(top==NULL)printf("emp");
    else printf("no");


    //printf("size :%d\n",size());

}
