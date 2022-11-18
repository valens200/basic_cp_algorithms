#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n == 0){
        return 1;
    } else if(n < 0){
        return -1;
    }else {
        //assumprion
        //here is like we are assigning all recursive factorials to variable smallFact
        int smallFact = factorial(n-1);
        //induction step
        return n * smallFact;
    }
}
int main()
{
    int n = 5;
    cout << factorial(n);
    return 0;
}