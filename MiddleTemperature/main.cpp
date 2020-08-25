#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> temperature;
    int u = 0;
    for(int i = 0; i < N; ++i){
        int n;
        std::cin >> n;
        temperature.push_back(n);
        u += n;
    }
    u = u / N;

    std::vector<int> K;

    for (int x = 0; x < temperature.size(); ++x){
        if(temperature[x] >= u){
            K.push_back(x);
        }
    }
    std::cout << K.size() << std::endl;
    for (auto i : K){
        std::cout << i << " ";
    }
    return 0;
}
