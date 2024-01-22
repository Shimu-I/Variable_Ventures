#include <iostream>

int main() {
    // Simple loop that prints numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Loop that prints even numbers from 2 to 10
    for (int i = 2; i <= 10; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Loop that prints numbers in reverse order from 10 to 1
    for (int i = 10; i >= 1; i--) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
