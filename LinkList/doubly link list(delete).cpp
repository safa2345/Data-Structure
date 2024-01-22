#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node
{

    int data;
    struct node *prev;
    struct node *next;

};

node *temp,*new_node;
struct node *head=NULL;
void push(int val)
{

    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    //struct node  *temp=head;
    new_node->data = val;
    new_node->prev =NULL;
    new_node->next = head;
    if(head!=NULL)
    {
        head->prev=new_node;
    }
    head=new_node;
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

    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main()
{

    cout<< "Main link:";
    push(117);
    push(76);
    push(555);
    push(22);
    display();


    cout<<"after delet:";
    remove(555);
    display();



    return 0;
}


