#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int y = 10;
    cout << "x,y:" << x << " and " << y << endl;
    cout << "x,y" << ++x << "and" << y++ << endl;
    cout << "x=" << --x << " and y= " << y-- << endl;
    ++x;
    y++;
    cout << "x=" << x << "and y=" << y << endl;
    --x;
    y--;
    cout << "x=" << x << " and y=" << y << endl;
    return 0;
}