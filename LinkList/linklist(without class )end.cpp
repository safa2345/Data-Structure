#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>

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
    new_node->next = head;
    head=new_node;

}

void display()
    {
      struct node* temp = head;
      while(temp != NULL)
      {
        cout << temp->data << " ";
        temp = temp->next;
      }
      cout << endl;
    }




int main(){

    head=NULL;


   cout<<"Main link :";
   push(117);
   push(28);
   push(55);
  display();

    return 0;
}

