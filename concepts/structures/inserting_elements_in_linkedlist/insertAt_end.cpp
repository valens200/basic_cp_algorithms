#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;
    Node(int data)
    {
        this->data = data;
    }
};
Node *insertAtEnd(Node *list, int data)
{

    Node *newNode = new Node(data);
    while (list->next != NULL)
    {
        list = list->next;
    }
    list->next = newNode;
    return list;
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
    Node *node1 = new Node(5);
    Node *node2 = new Node(6);
    node1->next = node2;
    node2->next = NULL;
    Node *node = insertAtEnd(node1, 100);
    Node *nod4 = insertAtEnd(node1, 1000);
    print(node1);

    return 0;
}