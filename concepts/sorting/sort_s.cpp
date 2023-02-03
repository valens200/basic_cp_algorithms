#include <iostream>
#include <fstream>
#include <string.h>
#include <string>

using namespace std;

struct Student
{
    string name;
    int age;
    int rollNumber;
    float marks;
} s1, s2, s3, s4, s5;

void print(Student s)
{
    cout << s.rollNumber << ", " << s.name << ", " << s.age << ", " << s.marks << endl;
}

bool isString(string input)
{
    try
    {
        stof(input);
        return false;
    }
    catch (invalid_argument e)
    {
        return true;
    }
}

bool verify(Student student, string verifications[])
{
    if (student.marks > 50 || student.marks < 0)
    {
        cout << endl
             << " Error: " << verifications[0] << "" << endl
             << endl;
        return false;
    }
    else if (student.age > 30 || student.age < 10)
    {
        cout << endl
             << "Error: " << verifications[1] << endl
             << endl;
        return false;
    }
    else if (student.rollNumber < 0 || isString(to_string(student.rollNumber)))
    {
        cout << endl
             << " Error: " << verifications[2]  << endl
             << endl;
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int sum, average;
    string verifications[] = {"We cannot allow marks beyond 50 or below zero.", " The age should be between 10 and 30 ", " The rollnumber should be a valid positive integer."};
    Student students[5] = {s1, s2, s3, s4, s5};

    cout << "==============================================" << endl;
    cout << "Instructions: " << endl;
    for (int i = 0; i < (end(verifications) - begin(verifications)); i++)
    {
        cout << "=> " << verifications[i] << endl;
    }
    cout << "==============================================" << endl;

    for (int i = 0; i < (end(students) - begin(students)); i++)
    {
    repeat:
        cout << "Enter the following separated by a space for student " << i + 1 << endl;
        cout << "Format -> (Roll_Number Name Age Marks): ";
        cin >> students[i].rollNumber >> students[i].name >> students[i].age >> students[i].marks;
        if (!verify(students[i], verifications))
        {
            students[i].age = 0;
            students[i].marks = 0;
            students[i].name = "";
            students[i].rollNumber = 0;
            goto repeat;
        }
        sum += students[i].marks;
    }

    cout << "Data entered" << endl;

    fstream myFile;
    myFile.open("mugisha.txt", ios::out);

    for (int i = 0; i < (end(students) - begin(students)); i++)
    {
        if (myFile.is_open())
        {
            myFile << students[i].rollNumber << ", " << students[i].name << ", " << students[i].age << ", " << students[i].marks << endl;
        }
    }
    int count = end(students) - begin(students);
    average = (sum / count);
    cout << sum << average;
    myFile.close();

    return 0;
}