#include <iostream>
#include <vector>
#include <string>

void Months(std::vector<std::vector<std::string>>& months){
    months.reserve(12);
    months[0].resize(31);
    months[1].resize(28);
    months[2].resize(31);
    months[3].resize(30);
    months[4].resize(31);
    months[5].resize(30);
    months[6].resize(31);
    months[7].resize(31);
    months[8].resize(30);
    months[9].resize(31);
    months[10].resize(30);
    months[11].resize(31);
}

void DUMP(int &i, std::vector<std::vector<std::string>> &v) {
    std::cout << v[i].size() << std::endl;
    for (auto x : v[i]) {
        std::cout << x << " ";
    }
}

void NEXT(std::vector<std::vector<std::string>>& v){
    int i = 0;
    if(v[i] >= v[i + 1]) {
        v[i].insert(end(v[i]), begin(v[i + 1]), end(v[i + 1]));
    }
    std::cout << v.size() << std::endl;
}

int main() {
    std::vector<std::vector<std::string>> months (31);
    Months(months);
    int CountOfOperations;
    int day;
    std::string things;
    std::string operation;
    
    std::cin >> CountOfOperations;
    for (int q = 0; q < CountOfOperations; ++q) {
        std::cin >> operation;
        if (operation == "add") {
            std::cin >> day >> things;
            months[day].push_back(things);
        } else if (operation == "dump") {
            std::cin >> day;
            DUMP(day, months);
            std::cout << std::endl;
        } else if (operation == "next") {
            NEXT(months);
        }
    }
    return 0;
}
