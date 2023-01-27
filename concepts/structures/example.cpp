#include<bits/stdc++.h>
using namespace std;

struct Student{
    int age;
    string name;
    void display(){
        cout << " the student name is \'" << age << "\' and name is \'" << name << "\'" <<endl;
    }
};

int main(){
    Student student1 = {2,"main"};
    student1.display();
    
}