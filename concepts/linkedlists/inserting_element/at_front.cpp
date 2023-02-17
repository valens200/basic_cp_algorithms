#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node() {}
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

Node *head = new Node(10);

Node *insertAtFront(int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
}
int main()
{

    Node *gen = insertAtFront(5);
    print(gen);

    return 0;
}