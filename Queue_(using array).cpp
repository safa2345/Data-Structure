#include <bits/stdc++.h>
using namespace std;
int maxSize = 10;
int que[10];
int front = 0, back = 0;

void push_back(int i)
{

    if(back >= maxSize)
        printf("Sorry, No more space\n");
    else
    {
        que[back] = i;
        back++;
    }
}

bool isEmpty()
{
    if(front == back)
        return true;
    else
        return false;
}

int pop_front()
{
    if(isEmpty())
        printf("sorry, empty queue\n");
    else
    {
        front++;
        return (que[front - 1]);
    }

    return -1;

}

int size()
{
    return back - front;
}

void print()
{
    int index;
    for(index = front; index < back; index++)
        printf("%d\t", que[index]);
}
int main()
{
    cout << "start \n" ;
    push_back(5);
    push_back(6);
    push_back(7);
    printf("size:%d\n", size());
    print();
    printf("pop front : %d\n\n", pop_front());
    print();
    pop_front();
    print();
    pop_front();
    print();
    pop_front();
    print();



}


