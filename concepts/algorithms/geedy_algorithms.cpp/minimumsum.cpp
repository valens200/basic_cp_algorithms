#include<bits/stdc++.h>
using namespace std;

// 1,2,3,4


int greedy(int arr[],int len){

    int avg;
    int sum = 0;
    int i = 0;
    while(i < len){
        sum += arr[i];
        i++;
    }
    avg = sum / i + 1;
    return len * (pow(avg, 2)) - 2 * avg * sum;

}
int main(){
    int numbers[5] = {1,2,9,2,6};
    cout << greedy(numbers, 5) << endl;
   return 0;
}