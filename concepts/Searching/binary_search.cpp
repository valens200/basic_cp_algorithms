#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int key)
{
    int len = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = len;

    int mid = low + high / 2;
    while(low < high){
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            high = mid - 1;
        }else if(arr[mid] < key ){
            low = mid + 1;
        }
    }

}
int main()
{
    int arr[] = {1,2,3,4,5};
    cout << binary(arr, 5);
}
