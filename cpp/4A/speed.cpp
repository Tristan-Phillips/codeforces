#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int w;
    std::cin >> w;
    
    if (w % 2 == 0 && w > 2) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    
    return 0;
}

/*
std::ios::sync_with_stdio(false);
    Purpose: This function call disables the synchronization between the C++ standard streams (cin, cout) and the C standard streams (stdin, stdout).
    Effect: By default, C++ streams are synchronized with their C counterparts for compatibility reasons, allowing you to mix C-style (printf, scanf) and C++-style I/O safely. However, this synchronization introduces overhead, slowing down your I/O operations.
    Benefit: Disabling this synchronization can significantly speed up input and output operations in C++ programs because it reduces the overhead associated with maintaining synchronization between the C++ and C I/O systems.

std::cin.tie(nullptr);
    Purpose: This function call unties cin from cout.
    Effect: By default, cin is tied to cout, meaning cout is flushed before any input operation. This ensures that all outputs are displayed before any input is read, which is useful for interactive programs but can cause unnecessary flushing and reduce performance.
    Benefit: Untying cin from cout allows the program to perform input operations without automatically flushing cout, which can improve performance when the program is input-heavy.
*/