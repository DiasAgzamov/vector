#include <iostream>
#include <vector>

int main() {
    int NumberOfDays;
    std::cin >> NumberOfDays;
    std::vector<int> temperature;
    int AverageMean = 0;
    for (int i = 0; i < NumberOfDays; ++i) {
        int t;
        std::cin >> t;
        temperature.push_back(t);
        AverageMean += t;
    }
    AverageMean = AverageMean / NumberOfDays;

    std::vector<int> AboveAverageMean;

    for (int i = 0; i < temperature.size(); ++i) {
        if (temperature[i] >= AverageMean) {
            AboveAverageMean.push_back(i);
        }
    }
    std::cout << AboveAverageMean.size() << std::endl;
    for (auto x : AboveAverageMean) {
        std::cout << x << " ";
    }
    return 0;
}
