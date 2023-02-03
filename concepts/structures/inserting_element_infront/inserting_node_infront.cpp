#include <bits/stdc++.h>
using namespace std;

class Node
{
    int data;
    int Node *next;
} *head;
void insertNodeFront(int num)
{
    Node *node = new Node();
    node->data = num;
    node->next = head;
    head = node;

    while (head != NULL)
    {
        cout << head->data << endl;
    }
}

int main()
{
    insertNodeFront(4);
    insertNodeFront(8);

    return 0;
}