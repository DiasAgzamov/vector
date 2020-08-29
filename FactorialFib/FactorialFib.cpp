#include <iostream>

int Factorial(int n) {
    if(n <= 1) return 1;
    return Factorial(n - 2) + Factorial(n - 1);
}

int main() {
    int a;
    std::cin >> a;
    std::cout << Factorial(a) << std::endl;
    return 0;
}

