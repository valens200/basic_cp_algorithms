#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {5, 2, 4, 7, 8, 1};
    int *p = arr;

    // int b = 8;
    // int *a = &b;
    // *a = 7;/
    char ab[] = "a";
    char *c = ab;
    int k = 5;
    int *b = &k;
    float f = 5.4f;
    float *d = &f;


    // cout << " the first change   b is :  " << *a << endl;
    // (*a)++;
    // cout << " the firs (*a)++ change b is :  " << *a << endl;
    // *(a++);
    // cout << " the first  *(a++) change b is :  " << *a << endl;
    // a++;
    // cout << " the first change b is :  " << *a << endl;
    cout << *arr << endl;
    cout << *p << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << " address of element at index  [ " << i << " ] " << &arr[i] << endl;
    }

    cout << "============================= second loop ====================" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << " address of element at index  [ " << i << " ] " << p++ << endl;
    }
    cout << "============================= printing values ====================" << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << " value of element at index  [ " << i << " ] " << *(p+i) << endl;
    }


    cout <<  " sizeof pointer b " << sizeof(b) << endl;
    cout << " sizeof pointer a " << sizeof(a) << endl;
    cout << " sizeof pointer a " << sizeof(d) << endl;
    cout << " sizeof pointer a " << sizeof(c) << endl;

    return 0;
}