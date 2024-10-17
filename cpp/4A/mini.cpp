#include <iostream>
int main() {
    int k; 
    std::cin >> k; 
    std::cout << (k % 2 == 0 && k > 2 ? "YES" : "NO");
}