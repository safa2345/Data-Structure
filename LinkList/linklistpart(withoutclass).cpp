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
    head=NULL;


    new_node = new node;
    new_node->data = val;
    new_node->next = NULL;

    if(head==NULL)
    {
        head = new_node;

    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
 node* temp = head;
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;


}
void  kill(int val){
if(head->data=val)
{
    delete head;
    head=head->next;
    return;
}
 node* temp = head;
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;

if(head->next==NULL)
{
    if(head->data==val){
   delete head;
   head=NULL;
   return;
    }

    else{

        cout<<"value not found";
    }

}




}




int main(){

    cout<< "Main link\n";
    push(117);
    push(145);
    push(45);
    push(190104145);
    push(190104117);
    cout<<"after delet\n";
    kill(190104117);

    return 0;
}

