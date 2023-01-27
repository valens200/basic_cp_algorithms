// #include <bits/stdc++.h>
// using namespace std;

// struct Student
// {
//     int rollNumber;
//     string studentName;
//     int studentAge;
//     float studentMarks;

// } student1, student2, student3;
// Student students[3] = {student1,
//                        student2,
//                        student3};

// void getInput(string input)
// {
//     cout << " Enter the " << input << " : ";
// }

// int main()
// {
//     fstream myfile;
//     vector<Student> retrivedStudents;
//     myfile.open("recordings.txt", ios::out | ios::app | ios::in);
//     int i = 0;
//     bool real = true;
//     while (i < 3)
//     {
//         cout << "For student " << i << endl;
//         getInput("rollNUmber");
//         cin >> students[i].rollNumber;
//         cout << "Enter the studentName :";
//         cin >> students[i].studentName;
//         cout << " Enter the studentAge : ";
//         cin >> students[i].studentAge;
//         cout << "Enter the studentMarks : ";
//         cin >> students[i].studentMarks;
//         myfile << "\n";
//         myfile << " RollNumber:" << students[i].rollNumber << "\n"
//                << " StudentName:" << students[i].studentName << "\n"
//                << " StudentAge:" << students[i].studentAge << "\n"
//                << " Student Marks:" << students[i].studentMarks << "\n";
//         i++;
//     }

//     // retrieving
//     myfile.close();

//     //  RollNumber : 334
//     //  StudentName : mumu
//     //  StudentAge : 3434
//     //  Student Marks : 343

//     myfile.open("recordings.txt", ios::in);
//     if (myfile.is_open())
//     {
//         string line;
//         Student student;
//         while (getline(myfile, line))
//         {
//             if (line == "")
//             {
//                 continue;
//             }
//             cout << strtok(line , ":");
//             // cout << line << endl;
//         }
//     }
//     myfile.close();
// }