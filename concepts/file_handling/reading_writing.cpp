// offstream and ifstream classes
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

struct Student
{

    int rollNumber;
    string firstName;
    string lastName;
    string email;
    string aClass;

    void display()
    {
        cout << firstName + " " + lastName + " " + email + " " + aClass;
    }
} s1, s2, s3, s4, s5;

struct Student students[] = {s1, s2, s3, s4, s5};

void readStudents()
{
    ifstream file("students.txt");
    string line;
    while (!file.eof())
    {
        getline(file, line);
        cout << line << "\n";
    }
}

void storeStudents()
{

    ofstream file("students.txt");

    int size = sizeof(students) / sizeof(students[0]);

    cout << size;

    if (!file.is_open())
    {
        cout << "Failed to open the file\n";
        return;
    }

    int i;
    for (i = 0; i < size; i++)
    {
        file << "\nFirstName :" + students[i].firstName + ", LastName :" + students[i].lastName + ", Email :" + students[i].email + ", Class :" + students[i].aClass;
    }
    if (i == size)
        file.close();
}
void getInputs()
{

    int n;

    cout << "Enter number of students : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Student student;
        cout << "\n Enter students' firstName : ";
        getline(cin, student.firstName);
        cout << "\n Enter students' lastName : ";
        getline(cin, student.lastName);
        cout << "\n Enter students' email : ";
        getline(cin, student.email);
        cout << "\n Enter students' class ex: [ Year 2B] : ";
        getline(cin, student.aClass);
        students[i] = student;
    }
    storeStudents();
    readStudents();
}

int main()
{

    getInputs();
    return 0;
}
