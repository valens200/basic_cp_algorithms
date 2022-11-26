#include <bits/stdc++.h>
using namespace std;

int solve(int x, int n)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {
        return x * pow(x, n - 1);
    }
}

int n1 = 0;
int n2 = 1;
int n3;
int fibonnaci(int n, int n1,int n2)
{

    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << " ";
        fibonnaci(n - 1, n1,n2);
        // return 0;    
    }
}

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n / 10) + n % 10;
    }
}

void print(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        print(n - 1);
        cout << n << endl;
        return;
    }
}

void printl(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n << endl;
        printl(n - 1);
    }
}
int main()
{
    //    cout << 346 / 10 << endl;
    //    cout << 345 % 10 << endl;
    //    cout << sum(345) << endl;
    cout << 0  << " " << 1 <<  " " ;
    fibonnaci(15, 0,1);
    // cout << solve(5,4) << endl;
    // cout << " hello " << endl;

    return 0;
}