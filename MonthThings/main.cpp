#include <iostream>
#include <vector>
#include <string>

/*void Months(std::vector<std::vector<std::string>>& months){
    std::vector<std::vector<int>> january (31);
    std::vector<std::vector<int>> february (28);
    std::vector<std::vector<int>> march (31);
    std::vector<std::vector<int>> april (30);
    std::vector<std::vector<int>> may (31);
    std::vector<std::vector<int>> june (30);
    std::vector<std::vector<int>> july (31);
    std::vector<std::vector<int>> august (31);
    std::vector<std::vector<int>> september (30);
    std::vector<std::vector<int>> october (31);
    std::vector<std::vector<int>> november (30);
    std::vector<std::vector<int>> december (31);
}*/

void DUMP(int &i, std::vector<std::vector<std::string>> &v) {
    std::cout << v[i].size() << std::endl;
    for (auto x : v[i]) {
        std::cout << x << " ";
    }
}

void NEXT(std::vector<std::vector<std::string>>& v){
    int i = 0;
    v[i].insert(end(v[i]), begin(v[i + 1]), end(v[i + 1]));
}

int main() {
    std::vector<std::vector<std::string>> months (31);
    //Months(months);
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
