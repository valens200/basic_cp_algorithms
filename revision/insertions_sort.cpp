#include<bits/stdc++.h>
using namespace std;



int sort(int arr[], int len){
    int i = 1;
    int j = 0;
    for(int i = 1; i < len ; i++){
        int current_val = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > current_val){
            arr[j+1] = arr[j];
            j = j - 1; 
        }
        arr[j] = current_val;

    }
     for (int k = 0; k < len; k++)
    {
        cout << arr[k] << endl;
    }
}
int main(){

    int numbers[5] = {100,4,5,6,7};
    sort(numbers, 5);


    return 0;
}