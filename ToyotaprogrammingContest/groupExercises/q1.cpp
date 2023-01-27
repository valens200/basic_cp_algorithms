#include<bits/stdc++.h>
using namespace std;


int i = 0;
int printArr(char *arr, int n){
    if(n == 0){
        return 0;
    }
    cout << arr[0] << "";
    i++;
    printArr(arr+1, n - 1);
}
int main(){
    char arr[4] = {"abc"};
    printArr(arr, 4);



}