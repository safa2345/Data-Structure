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


   struct  node* temp = head;
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

    cout<< "Main link\n";
    push(190104117);
    push(1901045676);
    push(55);
    push(22);
    display();
    cout<<"After delete:";
    kill(55);
    display();
    cout<<"after delet : ";
    kill(623);
    cout<<search(22)<<endl;
     cout<<search(556)<<endl;



    return 0;
}



