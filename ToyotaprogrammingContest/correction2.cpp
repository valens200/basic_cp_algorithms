#include <iostream>
using namespace std;

int sum = 0;
int getSum(int arr[], int n){
    if(n == 1){
        return *arr;
    }

    if(n == 0){
        return 0;
    }

    sum += *arr;
    if(sum != 0){
        return sum;
    }

    return arr[0] +  getSum(arr + 1, n - 1);
}
int main () {
    int arr[4] = {1,2,3,4};
    cout << getSum(arr,4);
  
    return 0;
}