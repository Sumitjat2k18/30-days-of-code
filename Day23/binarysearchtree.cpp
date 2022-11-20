#include <iostream>
#include <cstddef>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
class Solution
{
public:
    Node *insert(Node *root, int data)
    {
        if (root == NULL)
        {
            return new Node(data);
        }
        else
        {
            Node *cur;
            if (data <= root->data)
            {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else
            {
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }

    int getHeight(Node *root)
    {
        //   int leftcount =0,rightcount=0;
        //   if(root==NULL){
        //       return 0;
        //   }
        //   else{
        //       Node* cur;
        //       if(root->data < root->right->data){
        //           root->left=cur;
        //           leftcount++;}
        //       else{
        //           root->right=cur;
        //           rightcount++;}
        //       return max(leftcount,rightcount);}
        // Write your code here
        if (!root)
            return -1;
        return max(getHeight(root->left), getHeight(root->right)) + 1;
    }
}; // End of Solution