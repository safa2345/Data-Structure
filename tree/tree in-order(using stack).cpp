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
void inOrder(struct node *root)
{

    stack<node *> s;

    node *curr = root;


    while (curr != NULL || s.empty() == false)

    {

        /* Reach the left most Node of the

           curr Node */

        while (curr !=  NULL)

        {

            /* place pointer to a tree node on

               the stack before traversing

              the node's left subtree */

            s.push(curr);

            curr = curr->left;

        }


        /* Current must be NULL at this point */

        curr = s.top();

        s.pop();


        cout << curr->data << " ";


        /* we have visited the node and its

           left subtree.  Now, it's right

           subtree's turn */

        curr = curr->right;


    } /* end of while */
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

    inOrder(root);

    return 0;
}
