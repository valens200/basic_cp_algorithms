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

Node *insertELements()
{
    Node *head = NULL;
    Node *tail = NULL;

    int number;
    cout << " insert numbers : ";
    cin >> number;
    while (number != -1)
    {
        Node *newNode = new Node(number);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cout << " Enter another number : ";
        cin >> number;
    }
    return head;
}
int main()
{
    verfiy();
    Node *node = insertELements();
    print(node);

    return 0;
}