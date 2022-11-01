#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

bool checkPrime(int num)
{
    bool answer = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            answer = false;
            break;
        }
        else
        {
            continue;
        }
    }
    return answer;
}

int search(vi primes, int n){
      int  index = 0;
    for (int i = 0; i < primes.size(); i++)
    {
        if (primes[i] == n){
            index = i + 1;
            break;
        }else{
            index = 0;
        }
    }
    return index;

}
int main()
{
    vi primes;
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {

        if (checkPrime(i))
        {
            primes.push_back(i);
            cout << " prime " << i  <<endl;
        }
        else
        {
            continue;
        }
    }
     cout << n <<  " is the " << search(primes, n) <<"th in prime numbes " <<endl;
    return 0;
}

// using arrays





// bool isPrime(int num)
// {
//     int i = 2;

//     while (i < num)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//         else
//         {
//             return true;
//         }
//         i++;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// int search(int arr[], int n)
// {
//     int len = sizeof(arr) / sizeof(arr[0]);
//     int index = 0;
//     for (int i = 0; i < len; i++)
//     {
//         if (arr[i] == n)
//         {
//             index = i + 1;
//         }
//         else
//         {
//             continue;
//         }
//     }

//     return index;
// }

// int main()
// {

//     int prime;
//     cin >> prime;

//     int primes[prime];
//     int len = sizeof(primes) / sizeof(primes[0]);

//     for (int i = 2; i < len; i++)
//     {
//         if (isPrime(i))
//         {
//             primes[i] = i;
//         }
//         else
//         {
//             continue;
//         }
//     }

//     cout << prime << " is the " << search(primes, prime) << "nth  in prime numbers" << endl;

//     return 0;
// }