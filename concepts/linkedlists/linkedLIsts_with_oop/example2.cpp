#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int rollNumber;
    int id;
    string name;
    int age;
    Student *student;
    Student(int roll, int n, string name, int age)
    {
        this->rollNumber = roll;
        this->id = n;
        this->name = name;
        this->age = age;
        this->student = NULL;
    }
};
void printStudents(Student *student)
{
    while (student != NULL)
    {
        cout << student->name << " " << student->age << "\n";
        student = student->student;
    }
}
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
Node *
userData()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            head  = n->next;
            n = head;
            // n->next = head;
            // head = n;
        }
        cin >> data;
    }
    return head;
}

int main()
{
    Student *student1 = new Student(23, 23, "valens", 34);
    Student *student2 = new Student(34, 34, "MURANGWA ", 35);
    Student *student3 = new Student(56, 56, "KWIZERA", 100);
    Student *student4 = new Student(100, 89, "MURANGWA", 89);
    Student *student5 = new Student(100, 89, "MURANGWA", 89);
    student1->student = student2;
    student2->student = student3;
    student3->student = student4;
    student4->student = student5;
    student5->student = NULL;

    Node *head = userData();
    while (head != NULL)
    {
        cout << head->data << "\n";
        head = head->next;
    }

    // printStudents(student1);

    return 0;
}