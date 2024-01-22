#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node
{

    int data;
    struct node *next;

};

node *head,*temp,*new_node;
void push(int val)
{
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    new_node->next = NULL;
    if(head == NULL)
        head = new_node;
    else
    {
        struct node *temp2 = head;
        while(temp2->next != NULL)
            temp2 = temp2->next;

        temp2->next = new_node;
    }


}

void display()
{


   struct  node* temp = head;
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;







}


int main(){

    cout<< "Main link\n";
    push(190104117);
    push(1901045676);
    push(55);
    push(22);
    display();


    return 0;
}


