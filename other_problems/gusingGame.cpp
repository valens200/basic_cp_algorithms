#include<bits/stdc++.h>
using  namespace std;
typedef vector<string> vi;

int main(){

    vi districts{"Nyabihu", "MUSANZE", "BURERA", "RUHONDO"};
    string choice = "Nyabihu";
    string currentLetter;
    int guesTM = choice.size();

    int i, choice;

    for(i = 0; i< districts.size(); i++){
        cout << i << "." << districts[i] <<endl;
        }
     
     cin >> choice;
     cout << "Gues a letter ";

     while (i < guesTM)
     {
        cin >> currentLetter;
        int k;
        while( k < choice.size()){
            if(strcmp(choice[k], currentLetter){
                cout << "yes";
            }
            k++;
        }
        i++;
     }

    return 0;
}