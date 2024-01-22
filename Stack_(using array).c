#include<stdio.h>

#define CAP 4

int Stack[CAP];
int t=-1;
void push(int x)
{
    if(t<CAP-1)
    {
        t=t+1;
        Stack[t]=x;
        printf("added %d\n",x);
    }
    else
    {
        printf("no space\n");
    }
}
int pop()
{
    if(t>=0)
    {
        int val=Stack[t];
        t=t-1;
        return val;
    }
    return -1;
}
int size()
{
    return t+1;
}

int main()
{
    push(100);
    push(200);
    push(10);
    printf("Removed %d\n",pop());
    push(40);
    push(99);


    printf("size :%d\n",size());


    if(t==-1)
    {
        printf("Stack is empty");

    }
    else
    {
        printf("Stack is not empty");

    }



    return 0;
}


