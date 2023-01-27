
#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int s,int e){
     int i=s;
     int pivot = a[e];
     for(int j=s;j<=e-1;j++){
        if(a[j] < pivot){
            swap(a[i],a[j]);
            i++;
        }
     }
     swap(a[i],a[e]);
     return i;
}
void quickSort(int a[],int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}


void printArray(int arr[], int len){
    for(int i = 0; i <  len;i++){
        cout << arr[i] << endl;
    }

}

int main(){
int numbers[] = {3,445,6,10,4,0};
int len = sizeof(numbers) / sizeof(numbers[0]);
quickSort(numbers, 0, len);
printArray(numbers, len);

    return 0;
}