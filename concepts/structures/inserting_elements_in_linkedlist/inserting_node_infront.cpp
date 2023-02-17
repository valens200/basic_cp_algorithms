#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
     Node* next;
     Node(int data){
        this->data = data;
        this->next = NULL;
     }
};

Node* head = new Node(7);
void insertNodeFront(int num)
{
    Node *node = new Node(4);
    node->data = num;
    node->next = head;
    head = node;

    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

int main()
{
    // insertNodeFront(7);>
    insertNodeFront(4);
    // insertNodeFront(8);

    return 0;
}