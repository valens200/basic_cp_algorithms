#include<iostream>
using namespace std;

int main(){

    int *numbers = new int;
    numbers[0] = 90;
    numbers[1] = 90;


    cout << " enter numbers " <<endl;
    for(int i = 0; i< sizeof(numbers) / sizeof(numbers[0]); i++){
        cout << " number " << i << numbers[i] << endl;
        // numbers=0;
    }
  

    return 0;
}