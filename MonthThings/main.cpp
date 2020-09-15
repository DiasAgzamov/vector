#include <iostream>
#include <vector>
#include <string>

void dump(int &i, std::vector<std::vector<std::string>> &v) {
    std::cout << v[i].size() << " ";
    for (auto x : v[i]) {
        std::cout << x << " ";
    }
}

void next(){

}
int main() {
    int i = 0;
    std::vector<int> year {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::vector<std::vector<std::string>> month (year[i]);

    int CountOfOperations;
    int day;
    std::string things;
    std::string operation;

    std::cin >> CountOfOperations;
    for (int q = 0; q < CountOfOperations; ++q) {
        std::cin >> operation;
        if (operation == "ADD") {
            std::cin >> day >> things;
            month[day].push_back(things);
        } else if (operation == "DUMP") {
            std::cin >> day;
            dump(day, month);
            std::cout << std::endl;
        } else if (operation == "NEXT") {
            next(year, month, day, things);
        }
    }
    return 0;
}
