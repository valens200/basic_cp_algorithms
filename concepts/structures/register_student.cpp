#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string studentName;
    int Age;
    long rollNumber;
    float marks;
};
Student intializeStudent1()
{
    Student student;
    cout << " Enter name, age , rollNumber and marks fot the fisrt student" << endl;
    cin >> getline(cin, student.studentName) >> student.Age >> student.rollNumber >> student.marks;
    return student;
}
Student intializeStudent2()
{
    Student student;
    cout << " Enter name, age , rollNumber and marks fot the second student" << endl;
    cin >> getline(cin, student.studentName) >> student.Age >> student.rollNumber >> student.marks;
    return student;
}
Student intializeStudent3()
{
    Student student;
    cout << " Enter name, age , rollNumber and marks fot the third student" << endl;
    cin >> getline(cin, student.studentName) >> student.Age >> student.rollNumber >> student.marks;
    return student;
}

void print(Student students[])
{
    int i = 0;
    while (i < 3)
    {

        cout << " for student : " << i << endl;
        cout << " name :" << students[i].studentName << endl;
        cout << "age : " << students[i].Age << endl;
        cout << "marks : " << students[i].marks << endl;
        cout << " roleNumber :" << students[i].rollNumber << endl;
        i++;
    }
}

int main()
{

    Student student1 = intializeStudent1();
    Student student2 = intializeStudent2();
    Student student3 = intializeStudent3();

    Student students[3] = {student1, student2, student3};
    print(students);
}