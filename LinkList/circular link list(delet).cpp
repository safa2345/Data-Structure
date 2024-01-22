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

        new_node->next = new_node;
        head= new_node;
    }


}
  void remove(int val)
    {
      // If the head is to be deleted
      if (head->data == val)
      {
        delete head;
        head = head->next;
        return;
      }

      // If there is only one element in the list
      if (head->next == NULL)
      {
        // If the head is to be deleted. Assign null to the head
        if (head->data == val)
        {
          delete head;
          head = NULL;
          return;
        }
        // else print, value not found
        cout << "Value not found!" << endl;
        return;
      }

      // Else loop over the list and search for the node to delete
      node* temp = head;
      while(temp->next!= NULL)
      {
        // When node is found, delete the node and modify the pointers
        if (temp->next->data == val)
        {
          node* temp_ptr = temp->next->next;
          delete temp->next;
          temp->next = temp_ptr;
          return;
        }
        temp = temp->next;
      }

      // Else, the value was never in the list
      cout << "Value not found" << endl;
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

    remove(55);
    cout<<"after delet:";
    display();



    return 0;
}


