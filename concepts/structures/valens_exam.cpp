#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <ctype.h>
using namespace std;

class Student
{
public:
    int rollNumber;
    string name;
    int age;
    float marks;
    Student *next;

    Student() {}
    Student(int rollNumber, string name, int age, float marks)
    {
        this->rollNumber = rollNumber;
        this->name = name;
        this->age = age;
        this->marks = marks;
        this->next = NULL;
    }
};

Student *s1 = new Student();
Student *s2 = new Student();
Student *s3 = new Student();
Student *s4 = new Student();
Student *s5 = new Student();

Student *students[] = {s1, s2, s3, s4, s5};
Student *retrievedStudents[] = {s1, s2, s3, s4, s5};

// this is the function to read and write all students to the console

void readStudents(Student *studentsList)
{
    fstream myFile;
    myFile.open("recordings.txt", ios::in);
    if (myFile.is_open())
    {
        string line;
        int i = 0;

        while (getline(myFile, line))
        {

            // trying to eliminate the , character to extract the data i want
            int pos = line.find(",");
            int rollNumber = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find(",");
            string name = line.substr(0, pos);
            line = line.substr(pos + 1);
            pos = line.find(",");
            int age = stoi(line.substr(0, pos));
            line = line.substr(pos + 1);
            pos = line.find(",");
            int marks = stoi(line.substr(0, pos));

            retrievedStudents[i]->rollNumber = rollNumber;
            retrievedStudents[i]->name = name;
            retrievedStudents[i]->age = age;
            retrievedStudents[i]->marks = marks;

            i++;
        }
    }
    myFile.close();
    int sum = 0;

    // Rading all students from the file using linkedLists

    while (s1 != NULL)
    {
        sum = sum + s1->marks;
        cout
            << "\n";
        cout << "\tstudentRollNumber  : " << s1->rollNumber << "\n";
        cout << "\tstudentName  : " << s1->name << "\n";
        cout << "\tstudentAge : " << s1->age << "\n";
        cout << "\tstudentMarks : " << s1->marks << "\n";
        s1 = s1->next;
    }
    float avg = sum / 5;
    cout << sum << " sum\n";
    cout << "\t\t Average marks : " << avg << endl;
}

// saving students from keyboard into the .txt file

void saveStudents(int length)
{
    fstream myfile;
    myfile.open("recordings.txt", ios::out);
    if (!myfile)
    {
        cout << "Error :  Enable to open file " << endl;
        return;
    }
    int i = 0;
    while (i < length)
    {
        myfile << students[i]->rollNumber << "," << students[i]->name << "," << students[i]->age << "," << students[i]->marks << endl;
        i++;
    }
    myfile.close();
}

// getting inputs from the user and validating them

void getInputs()
{
    int numberOfStudents;
    cout << "\t\t\t\t\t Wellcome to valens's student registry! C++ is awesome \n";
    cout << "\n";
    cout << "\t\t hey!!! Your are allowed to keep only 5 students in a file: get started  by entering any number ";
    cin >> numberOfStudents;
    numberOfStudents = 5;

    for (int i = 0; i < numberOfStudents; i++)
    {
        cout << "\t\t\t For student  : " << i + 1 << endl;
        cout << "\t\tEnter name in format - > (rollNumber, name ,age,marks)  for  ',' press Enter button\n";
        string str;
        while (true)
        {
        main:
            cin >> students[i]->rollNumber >> getline(cin, students[i]->name) >> students[i]->age >> students[i]->marks;
            if (students[i]->rollNumber < 0 || (students[i]->age < 10 || students[i]->age > 30) || (students[i]->marks < 0 || students[i]->marks > 50))
            {
                cout << " \n";
                cout << " Error : Please enter valid inputs ( marks should be between 0 and 50 || and rollNumber should be valid positive number || and no age should be between 10 and 30) \n";
                goto main;
            }

            if (cin.fail())
            {
                cin.clear();
                getline(cin, str);
                cout << "\t\t\t\t follow the format : ";
                cout << "\t\tEnter name in format - > (name,rollnumber,age,marks)  for  ',' press Enter key\n";
                continue;
            }
            if (cin.peek() != '\n')
            {
                cout << " try again ";
            }
            else
            {
                break;
            }
        }
    }
    saveStudents(numberOfStudents);
    readStudents(s1);
    cout << "\t\t============================ Results ============================\n";
}
int main()
{
    s1->next = s2;
    s2->next = s3;
    s3->next = s4;
    s4->next = s5;
    getInputs();

    return 0;
}
