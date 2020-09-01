#include <iostream>

int Fibonacci(int n) {
    if(n <= 1) return 1;
    return Fibonacci(n - 2) + Fibonacci(n - 1);
}

int Factorial (int num){
    if (num <= 1) return 1;
    return n * Factorial(num - 1)
}

int main() {
    int a;
    std::cin >> a;
    std::cout << "Factorial is: " << std::endl
    std::cout << Factorial(a) << std::endl;
    std::cout << "Fibonacci is: " << std::endl
    std::cout << Fibonacci(a) << std::endl;
    return 0;
}

