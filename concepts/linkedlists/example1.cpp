#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void
printNode(Node *node)
{

    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}
int main()
{
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();
    first->data = 10;
    first->next = second;
    second->data = 15;
    second->next = third;
    third->data = 20;
    third->next = NULL;
    printNode(second);

    return 0;
}