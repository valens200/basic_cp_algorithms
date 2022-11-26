#include <bits/stdc++.h>
using namespace std;

\
int fact(int n){
    if(n == 1){
        return 1;
    }else if (n == 0){
        return -1;
    }else{
        return n * fact(n-1);
    }
}
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
    int n = 2;
    cout << fact(n);
    return 0;
}