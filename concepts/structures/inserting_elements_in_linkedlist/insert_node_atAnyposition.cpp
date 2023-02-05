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
Node *insert(Node *head, int pos, int data)
{
    int i = 0;
    Node *newNode = new Node(data);
    while (i <= pos)
    {
        head = head->next;

        if (i == pos)
        {
            newNode->next = head;
            head = newNode;
        }

        i++;
    }
    return head;
}
void print(Node *head)
{
    while (head->next != NULL)
    {
        cout << head->data << "\n";
        head = head->next;
    }
}
int main()
{
    Node *node1 = new Node(5);
    Node *node2 = new Node(4);
    Node *node3 = new Node(55);
    Node *node4 = new Node(10);
    Node *node5 = new Node(0);
    Node *node6 = new Node(6);
    node1->next = node2;
    node2->next =node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    Node *node = insert(node1, 3, 100);
    print(node1);

    return 0;
}