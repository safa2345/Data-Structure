#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
struct node
{

    int data;
    node* left;
    node* right;

};
node* create_node(int val)
{

    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = val;
    new_node->left =NULL;
    new_node->right= NULL;

    return new_node;
}
void add_left_children(node *parent_node,node *child)
{

    parent_node->left=child;

}


void add_right_children(node *parent_node,node *child)
{

    parent_node->right=child;

}

node* create_tree()
{

    node *two=create_node(2);
    node *seven=create_node(7);
    node *nine=create_node(9);
    add_left_children(two,seven);
    add_right_children(two,nine);




    node *one=create_node(1);
    node *six=create_node(6);
    add_left_children(seven,one);
    add_right_children(seven,six);




    node *eight=create_node(8);
    add_right_children(nine,eight);


    node *five=create_node(5);
    node *ten=create_node(10);
    add_left_children(six,five);
    add_right_children(six,ten);



    node *three=create_node(3);
    node *four=create_node(4);
    add_left_children(eight,three);
    add_right_children(eight,four);
    return two;

}

void post_order(node *node)
{


if(node->left!=NULL)
{
    post_order(node->left);
}


if(node->right!=NULL)
{
    post_order(node->right);
}
 printf("%d->",node->data);

}









int main()
{


    node *root=create_tree();

    cout<<root->data<<"\t";
    post_order(root);

    return 0;



}

