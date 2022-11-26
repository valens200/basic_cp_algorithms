#include<bits/stdc++.h>
using namespace std;


int temp = 0;
int palindrome(int n){

    if(n == 0){
        return temp;
    }else{
        temp = (temp * 10) + (n%10);
        return  palindrome(n/10);
    }

}
int main(){
    int number = 121;
    int numbers = palindrome(number);
    cout << numbers << endl;

    return 0;
}