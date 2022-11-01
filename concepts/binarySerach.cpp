
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int binarySearch(vector<int> arr, int x)
{
	int low = 0, high = arr.size() - 1;
	int mid;
	while(low <= high){
      mid = low + high / 2;
   
      if(arr[mid] <  x){
       low = mid + 1;
      }else{
        high = mid - 1;
      }
    }
    if(arr[low] == x){
        cout << " found at " << low <<endl;
    }else if(arr[high] == x){
        cout << " found at " << high <<endl;
    }else if(arr[mid] == x){
        cout << " found at " << mid <<endl; 
    }else{
        cout << " no element found " <<endl;
    }
}

int main()
{
	vector<int> v = { 1, 3, 4, 5, 6 };
	int To_Find = 1;
	binarySearch(v, 6);

	return 0;
}
