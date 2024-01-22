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
  void kill(int val)
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
      struct node* temp = head;
      while(temp != NULL)
      {
        cout << temp->data << " ";
        temp = temp->next;
      }
      cout << endl;
    }


  bool search(int val)
    {
      node* temp = head;
      while(temp != NULL)
      {
        if (temp->data == val)
          return true;
        temp = temp->next;
      }
      return false;
    }

int main(){

    head=NULL;


   cout<<"Main link :";
   push(117);
   push(28);
   push(55);
  display();
  cout<<"After delete: ";
kill(28);
display();
cout<<"After delete: ";
kill(236);
 cout << search(7) << endl;
  cout << search(55) << endl;
    return 0;
}

