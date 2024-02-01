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

Student students[] = {};

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
}

void storeStudents(Student students[], int size)
{

    ofstream file("students.txt");

    if (!file.is_open())
    {
        cout << "Failed to open the file\n";
        return;
    }

    int i;
    for (i = 0; i < size; i++)
    {
        // file << " Student Number:" + students[i].rollNumber + " :\n";
        file << "FirstName :" + students[i].firstName + ", LastName :" + students[i].lastName + ", Email :" + students[i].email + ", Class :" + students[i].aClass;
    }
    if (i == size)
        file.close();
}

void readStudents()
{

    ifstream file('students.txt');

    if (file.fail())
    {
        cout << "The file could not be opened.";
        return 1;
    }

    while (!file.eof())
    {
        string line;
        
    }
}

int main()
{

    getInputs();
    storeStudents(students, 1);

    return 0;
}
