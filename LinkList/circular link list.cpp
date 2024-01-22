#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node
{

    int data;
    struct node *next;

};

node *temp,*new_node;
struct node *head=NULL;
void push(int val)
{

  struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node  *temp=head;
    new_node->data = val;
    new_node->next = head;
    if(head!=NULL){
      while(temp->next!=head)
      {
          temp=temp->next;
      }
          temp->next=new_node;

    }
    else
    {
       /* struct node *temp2 = head;
        while(temp2->next != NULL)
            temp2 = temp2->next;*/

        new_node->next = new_node;
        head= new_node;
    }


}

void display()
{
   struct  node* temp=head;

        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while(temp!=head);

}


int main(){

    cout<< "Main link:";
    push(190104117);
    push(1901045676);
    push(55);
    push(22);
    display();


    return 0;
}


