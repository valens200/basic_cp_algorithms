#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <ctype.h>
using namespace std;

struct Student
{
    int rollNumber;
    string studentName;
    int studentAge;
    float studentMarks;
    void display()
    {
        cout << "$name: " << studentName << endl;
    }
} s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11;

Student students[] = {s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11};
Student retrievedStudents[] = {s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11};

void mergeSort(Student a[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        //calling it self and recording the execution signature untill the condtion is violated
        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);
        int i = start;
        int j = mid + 1;
        int k = 0;

        Student temp[end - start + 1];
        while (i <= mid && j <= end)
        {
            if (a[i].studentMarks < a[j].studentMarks)
            {
                temp[k++] = a[i++];
            }
            else
            {
                temp[k++] = a[j++];
            }
        }
        while (i <= mid)
        {
            temp[k++] = a[i++];
        }
        while (j <= end)
        {
            temp[k++] = a[j++];
        }
        k = 0;
        for (int i = start; i <= end; i++)
        {
            a[i] = temp[k++];
        }
    }
}

void readStudents(int length)
{
    fstream myFile;
    myFile.open("recordings.txt", ios::in);
    if (myFile.is_open())
    {
        string line;
        int i = 0;

        while (getline(myFile, line))
        {
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

            retrievedStudents[i].rollNumber = rollNumber;
            retrievedStudents[i].studentName = name;
            retrievedStudents[i].studentAge = age;
            retrievedStudents[i].studentMarks = marks;

            i++;
        }
    }
    myFile.close();
    mergeSort(retrievedStudents, 0, length - 1);
    int sum = 0;
    for (int k = 0; k < length; k++)
    {
        sum += retrievedStudents[k].studentMarks;
        cout
            << "\n";
        cout << "\tstudentRollNumber  : " << retrievedStudents[k].rollNumber << "\n";
        cout << "\t studentName  : " << retrievedStudents[k].studentName << "\n";
        cout << "\tstudentAge : " << retrievedStudents[k].studentAge << "\n";
        cout << "\tstudentMarks : " << retrievedStudents[k].studentMarks << "\n";
    }
    float avg = sum / length;
    cout << "\t\t Average marks : " << avg << endl;
}
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
        myfile << students[i].rollNumber << "," << students[i].studentName << "," << students[i].studentAge << "," << students[i].studentMarks << endl;
        i++;
    }
    myfile.close();
}
void getInputs()
{
    int numberOfStudents;
    cout << "\t\t How many students do you wish to keep into the file? : ";
    cin >> numberOfStudents;

    for (int i = 0; i < numberOfStudents; i++)
    {
        cout << "\t\t\t For student  : " << i + 1 << endl;
        cout << "\t\tEnter name in format - > (rollNumber, name ,age,marks)  for  ',' press Enter button\n";
        string str;
        while (true)
        {
            cin >> students[i].rollNumber >> students[i].studentName >> students[i].studentAge >> students[i].studentMarks;
            string str;
            if (cin.fail())
            {
                cin.clear();
                getline(cin, str);
                cout << "\t\tPlease make sure that your are entering correct type (all is numbers except for name which is text) !";
                cout << "\t\t\t\t follow the format : ";
                cout << "\t\tEnter name in format - > (name,rollnumber,age,marks)  for  ',' press Enter button\n";
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
        if (students[i].rollNumber < 0)
        {
            cout << "RollNumber should not bo bellow zero\n";
        }
    }
    saveStudents(numberOfStudents);
    readStudents(numberOfStudents);
    cout << "\t\t============================ Results ============================\n";
}
int main()
{
    getInputs();

    return 0;
}
