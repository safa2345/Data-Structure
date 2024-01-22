#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, left child and right child */

struct node {

    int data;

    struct node* left;

    struct node* right;
};

/* Helper function that allocates a new node with the given data and

   NULL left and right  pointers.*/

node* create_node(int val)
{

    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = val;
    new_node->left =NULL;
    new_node->right= NULL;

    return new_node;
}
// An iterative process to print inorder traversal of Binary tree



 void postOrderIterative(node* root)
{

    if (root == NULL)

        return;



    // Create two stacks

    stack<node *> s1, s2;



    // push root to first stack

    s1.push(root);

    node* node;



    // Run while first stack is not empty

    while (!s1.empty()) {

        // Pop an item from s1 and push it to s2

        node = s1.top();

        s1.pop();

        s2.push(node);



        // Push left and right children

        // of removed item to s1

        if (node->left)

            s1.push(node->left);

        if (node->right)

            s1.push(node->right);

    }



    // Print all elements of second stack

    while (!s2.empty()) {

        node = s2.top();

        s2.pop();

        cout << node->data << " ";

    }
}



// Driver program to test above functions

int main()
{

    /* Constructed binary tree is

            10

          /   \

        8      2

      /  \    /

    3     5  2

  */

    struct node* root = create_node(10);

    root->left = create_node(8);

    root->right = create_node(2);

    root->left->left = create_node(3);

    root->left->right = create_node(5);

    root->right->left = create_node(2);

     postOrderIterative(root);

    return 0;
}
