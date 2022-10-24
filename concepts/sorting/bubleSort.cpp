#include<bits/stdc++.h>
using namespace std;
void swap(int a, int b){
    int temp;
    if(a > b){
        temp = b;
        b = a;
        a = temp;
    }
}

void printArr(int arr[]){
    for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " ";
    }
}

void sort(int  arr[]){
    int temp;
    for( int i = 0; i< 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
           
        }
    }

    printArr(arr);
}
int  main(){
    int numbers[] = {3,4,5,10,7};
    sort(numbers);
    return 2;

}