#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    void print()
    {
        cout << this->data;
    }
    Node(int data)
    {
        this->data = data;
    }
};

Node *head = NULL;
Node *tail = NULL;
Node *
insertAtHead()
{
    int data;
    cout << "Enter the number \n";
    cin >> data;

    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "\n";
        head = head->next;
    }
}

int main()
{

    Node *head = insertAtHead();
    print(head);

    return 0;
}