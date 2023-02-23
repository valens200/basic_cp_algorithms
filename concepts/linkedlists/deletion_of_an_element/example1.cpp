#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int search(Node *head, int data)
{
    int position = 1;
    while (head != NULL)
    {
        if (head->data == data)
        {
            position++;
        }
        head = head->next;
    }
    return position;
}

Node *deleteFirstNode(Node *head)
{
    // Node *temp = head;
    head = head->next;
    // delete temp;

    return head;
}

void dislay(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}



// function checkPassword(username, password)
// {
//   if( username === 'admin' && password === 'strongPassword098765' )
//   {
//     return true;
//   }
//   else
//   {
//     return false;
//   }
// }

Node *deleteLastNode(Node *head)
{

    Node *temp = head;
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *node = temp->next;
    temp->next = NULL;
    return head;
}

int main()
{

    Node *node1 = new Node(4);
    Node *node2 = new Node(6);
    Node *node3 = new Node(8);
    Node *node4 = new Node(10);
    Node *node5 = new Node(15);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    cout << "Found at index : " << search(node1, 8) << endl;
    // Node *updatedList = deleteFirstNode(node1);
    Node *updated = deleteLastNode(node1);
    dislay(updated);

    return 9;
}