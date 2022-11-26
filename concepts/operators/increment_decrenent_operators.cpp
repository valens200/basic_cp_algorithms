#include <iostream>
using namespace std;
int main()
{
    int a, c;
    int x = 5;
    int y = 10;
    cout << "x=" << x << " and y=" << y << endl;
    a = ++x;
    c = y++;
    cout << "x=" << x << "and y=" << y << endl;
    cout << "a= " << a << " and c=" << c << endl;
    a = --x;
    c = y--;
    cout << "x=" << x << " and y=" << y << endl;
    cout << "a=" << a << " and c=" << c << endl;
    return 0;
}