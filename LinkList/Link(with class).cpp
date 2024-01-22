#include<iostream>
using namespace std;

struct node
{

    int data;
    struct node *next;
};

class link
{
public:
    // Head pointer
    node *head;
 // default constructor. Initializing head pointer
    link()
    {
        head=NULL;
    }
// inserting elements (At start of the list)
    void push(int v)
    {
        // make a new node
        node *new_node = new node;
        new_node->data = v;
        new_node->next = NULL;

 // If list is empty, make the new node, the head
        if (head == NULL)
            head = new_node;

 // else, make the new_node the head and its next, the previous
      // head

        else
        {
            new_node->next = head;
            head = new_node;
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
//print the values
    void display()
    {
        node* temp = head;
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }




};
int main()
{
    cout<<"Main link:";
    link l;
    l.push(34);
    l.push(13);
    l.push(89);
    l.push(67);
    l.display();
    l.remove(34);
    cout<<"after deleting:";
    l.display();
    l.remove(89);
    cout<<"after deleting 89:";
    l.display();
    remove()






}
