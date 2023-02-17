#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int id)
    {
        this->data = data;
        this->next = NULL;
    }
};
void printNode(Node *node)
{

    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

void displayList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data;
        node = node->next;
    }
}

void addNode(Node *node1, int position, Node *newNode)
{
}

int i = 0;
int getLength(Node *node)
{
    while (node != NULL)
    {
        node = node->next;
        i++;
    }
    return i;
}

int main()
{
    // dynamic initialization
    Node *first = new Node(2);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *fourth = new Node(2);
    first->next = second;
    second->next = third;
    fourth->next = fourth;
    fourth->next = second;

    // static initialization
    Node n1(5);
    Node n2 = Node(7);

    n2.next = first;
    n1.next = &n2;
    n2.next = NULL;

    cout << "the length is : " << getLength(first);
    printNode(first);
    displayList(&n1);

    return 0;
}