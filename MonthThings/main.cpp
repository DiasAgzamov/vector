#include <iostream>
#include <vector>
#include <string>

void Year(std::vector<std::vector<int>>& months){
    months.resize(12);
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
    for(int i = 0; i < months.size(); ++i){
        std::cout << months[i].size() << " ";
    }
    std::cout << std::endl;
}

void dump(int &i, std::vector<std::vector<std::string>> &v) {
    std::cout << v[i].size() << " ";
    for (auto x : v[i]) {
        std::cout << x << " ";
    }
}

void next(std::vector<std::vector<int>> v){
    int i = 0;
    Year(v);
    std::cout << v[i].size() << std::endl;
    v[i++];
    v[i].insert(end(v[i]), begin(v[i-1]), end(v[i-1]));
    std::cout << v[i].size() << std::endl;
}

int main() {
    std::vector<std::vector<int>> year;
    std::vector<std::vector<std::string>> months (31);
    Year(year);

    int CountOfOperations;
    int day;
    std::string things;
    std::string operation;
    
    std::cin >> CountOfOperations;
    for (int q = 0; q < CountOfOperations; ++q) {
        std::cin >> operation;
        if (operation == "ADD") {
            std::cin >> day >> things;
            months[day].push_back(things);
        } else if (operation == "DUMP") {
            std::cin >> day;
            dump(day, months);
            std::cout << std::endl;
        } else if (operation == "NEXT") {
            next(year);
        }
    }
    return 0;
}
