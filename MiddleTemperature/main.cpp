#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N; // Numbers of days
    std::vector<int> temperature;
    int u = 0; // The arithmetic mean
    for (int i = 0; i < N; ++i) {
        int t;
        std::cin >> t;
        temperature.push_back(t);
        u += t;
    }
    u = u / N;

    std::vector<int> K; // Numbers of above the arithmetic mean

    for (int i = 0; i < temperature.size(); ++i) {
        if (temperature[i] >= u) {
            K.push_back(i);
        }
    }
    std::cout << K.size() << std::endl;
    for (auto x : K) {
        std::cout << x << " ";
    }
    return 0;
}
