#include <iostream>
#include <vector>
#include <string>

void dump(int &i, std::vector<std::vector<std::string>> &v) {
    std::cout << v[i-1].size() << " ";
    for (auto x : v[i]) {
        std::cout << x << " ";
    }
}

void next(const std::vector<int>& year, std::vector<std::vector<std::string>>& month, const int& m){
    std::cout << month.size() << std::endl;

    if(month.size() <= year[m]) {
        month.resize(year[m]);
    }else{
        while(month.size() > year[m]){
            for (int i = year[m] - 1; i < month.size(); ++i){
                month[year[m] - 1].insert(end(month[year[m]-1]), begin(month[i]),
                                          end(month[i]));
            }
            month.resize(year[m]);
        }
    }
    std::cout << month.size() << std::endl;
}

int main() {
    int m = 0;
    std::vector<int> year {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::vector<std::vector<std::string>> month (year[m]);

    int CountOfOperations;
    int day;
    std::string things;
    std::string operation;

    std::cin >> CountOfOperations;
    for (int q = 0; q < CountOfOperations; ++q) {
        std::cin >> operation;
        if (operation == "ADD") {
            std::cin >> day >> things;
            month[day-1].push_back(things);
        } else if (operation == "DUMP") {
            std::cin >> day;
            dump(day, month);
            std::cout << std::endl;
        } else if (operation == "NEXT") {
            m++;
            if (m == 12){
                m = 0;
            }
            next(year, month, m);
        }
    }
    return 0;
}
