#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
/*
@author avalens
*/

void printArr(vi arr) {
    for( int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}
void  sort(vi arr){
    int len = arr.size();

    for( int i = 0; i< len ; i++){
        int curr_val = arr[i];
        int position = i;

        while (position > 0 && arr[position  - 1] > curr_val){
            arr[position] = arr[position - 1]; 
            position--;           
        }
       arr[position] = curr_val;
        
    }
    printArr(arr);
}
int  main(){

    vector<int> numbers = {34,34,5452,3,23};
    sort(numbers);
    return 0;

}