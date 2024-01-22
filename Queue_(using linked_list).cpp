#include<stdio.h>
#include <bits/stdc++.h>

struct node
{
    int data;
    struct node*next;


};
struct node*front=NULL;
struct node*last=NULL;

void push(int x)
{
    struct node*temp=(struct node *)malloc(sizeof(struct node));


    temp->data=x;
    temp->next=NULL;
    printf("added %d\n", x);
    if(front==NULL && last==NULL)
    {
        front=last=temp;
        return;
    }
    last->next=temp;
    last=temp;



}

int pop()
{

    struct node*temp=front;
    if(front==NULL)
        return -1;
    if(front==last)
    {

        front=last=NULL;
    }
    else
    {
        front=front->next;

    }
    int i = temp -> data;
    free(temp);
    return i;

}
int isEmpty()
{

    return front==NULL;
}
int main()
{
    push(777650);
    push(200);
    push(10);
    push(346);
    printf("Removed %d\n",pop());
    push(40);
    push(99);
    printf("Removed %d\n",pop());

    if(front==NULL)
    {
        printf("Empty");
    }

    else
    {
        printf("not empty");
    }




}

