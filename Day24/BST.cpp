#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node * root){
      //Write your code here
  	
//   void levelOrder(Node * root){
      queue<Node*> q;
      q.push(root);
      while(!q.empty())
      {
          Node* temp = q.front();
          q.pop();
          if(temp->left)
          {
              q.push(temp->left);
          }
          if(temp->right)
          {
              q.push(temp->right);
          }
          std::cout << temp->data << " ";
      }
  
	}

};//End of Solution