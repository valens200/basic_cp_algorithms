#include <iostream>

int main () {
    int n1, n2, n3;
    std::cout << "Please enter n1, n2 and then n3:\n";
    std::cin >> n1 >> n2 >> n3;
    int max = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
    std::cout << "The maximum is: " << max << std::endl;
    return 0;
}