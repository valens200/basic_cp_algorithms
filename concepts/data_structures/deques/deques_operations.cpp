#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int> numbers ;
    numbers.push_back(1);
    numbers.push_front(0);
    numbers.push_back(2);
    cout << " =====================" <<endl;
    numbers.pop_back();
    numbers.pop_front();

    for(auto n : numbers){
        cout << n <<endl;
    }

    return 0;
}