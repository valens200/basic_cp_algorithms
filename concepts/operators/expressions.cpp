#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x = 10, y = 20, z = 5, t = 2, s = 7, k, f, p, h, q;
    k = x / y % s * t + y / x * t;
    f = x * y / z % s * t - s * x / t;
    p = y / x * t;
    h = x * y / z % s * t - s * x / t + y / x * t;
    q = x * (y / z % s) * t - s * x / t + y / (x * t);

    cout << "K : " << setw(2) << k << endl;
    cout << "F : " << setw(2) << f << endl;
    cout << "p : " << setw(2)  << p << endl;
    cout << "h : " << setw(2) << h << endl;
    cout << "q : " << setw(2) << q << endl;
    return 0;
}