#include<bits/stdc++.h>
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

Node *head = NULL;
Node *temp = head;
Node* insertAtposition(Node *head, int pos, int data){
    int count;
    if(pos < 0){
        return head;
    }
    if(pos == 0){
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }
    // while(count <= )
}

int main(){



    return 0;
}