#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int target){
   int i = 0;
   int result = false;
   while(i < sizeof(arr) / sizeof(arr[0])){
    if(arr[i] == target){
        result =  true;
        break;
    }
    i++;
   }
   return result;
}
int main(){
    int numbers[] = {2,3,4,55,5};
    int number;
    cin >> number;
    if(search(numbers, number)){
        cout << " number is found int the array";
    }else{
         cout << " number is not found in the array";
    }


}