#include<stdio.h>
#include<stdlib.h>

struct node
{
    int datapart;
    struct node*next;


};
int main()
{
    //firstly add part null
    struct node *a=NULL;
    struct node *b=NULL;
    struct node *c=NULL;
    //keeping size fixed for each add part
    a=(struct node*)malloc(20);

    b=(struct node*)malloc(20);

    c=(struct node*)malloc(20);
    //data assign
    a->datapart=10;
    b->datapart=35;
    c->datapart=70;
    //connected portion
    a->next=b;
    b->next=c;
    c->next=NULL;
    //print link list-traverse(starting point of link list)
    while(a!=NULL)
    {
       printf("%d\n",a->datapart);
       a=a->next;//i=++ type work,this lines means a=b hoiye jabe then c hoiye jabe plus hoiye

    }




}

