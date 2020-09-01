#include <iostream>
#include <vector>

void Come(int c, std::vector<bool> &v) {
    if (c >= 0) {
        for (int i = 0; i < c; ++i) {
            v.push_back(false);
        }
    } else {
        for (int i = 0; i > c; --i) {
            v.pop_back();
        }
    }
}

void Worry_Count(std::vector<bool> &v) {
    int wc = 0;
    for (auto x : v) {
        if (v[x] == 1) {
            wc++;
        }
    }
    std::cout << wc << std::endl;
}

int main() {
    std::vector<bool> queue;
    int NumbersOfOperation;
    int worry;
    int quiet;
    int come;

    std::cin >> NumbersOfOperation;
    for (int q = 0; q < NumbersOfOperation; ++q) {
        std::string operation;
        std::cin >> operation;
        if (operation == "come") {
            std::cin >> come;
            Come(come, queue);
        } else if (operation == "worry") {
            std::cin >> worry;
            queue[worry] = true;
        } else if (operation == "quiet") {
            std::cin >> quiet;
            queue[quiet] = false;
        } else if (operation == "worry_count") {
            Worry_Count(queue);
        }
    }

    return 0;
}
