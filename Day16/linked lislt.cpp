#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
class Solution
{
public:
    //       Node* insert(Node *head,int data)
    //       {
    //         Node* new_node= new Node(10);
    //         new_node->data=data;
    //          new_node->next =(head);
    //          head=new_node;
    // return head;
    Node *insert(Node *head, int data)
    {
        Node *new_node = new Node(data);

        // is it first element of the list?
        if (!head)
            return new_node;

        Node *last = head;
        // walk to end of list
        while (last->next)
            last = last->next;

        // attach new node to end of list
        last->next = new_node;

        return head;
    }
    // }

    void display(Node *head)
    {
        Node *start = head;
        while (start)
        {
            cout << start->data << " ";
            start = start->next;
        }
    }
};
int main()
{
    Node *head = NULL;
    Solution mylist;
    int T, data;
    cin >> T;
    while (T-- > 0)
    {
        cin >> data;
        head = mylist.insert(head, data);
    }
    mylist.display(head);
}