#include <iostream>
#include <stdexcept> // For std::runtime_error

// Function that throws an exception
void divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero error!"); // Throw an exception
    }
    std::cout << "Result: " << a / b << std::endl;
}

int main() {
    try {
        divide(10, 0); // This will cause an exception
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }

    return 0;
}