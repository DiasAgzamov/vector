#include <iostream>
#include <vector>

void Come(int c, std::vector<bool>& v) {
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

void Worry_Count(std::vector<bool>& v) {
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
    int Q;
    int worry;
    int quiet;
    int come;
    std::string oper;
    std::cin >> Q;
    
    for (int q = 0; q < Q; ++q) {
        std::cin >> oper;
        if (oper == "come") {
            std::cin >> come;
            Come(come, queue);
        } else if (oper == "worry") {
            std::cin >> worry;
            queue[worry] = true;
        } else if (oper == "quiet") {
            std::cin >> quiet;
            queue[quiet] = false;
        } else if (oper == "worry_count") {
            Worry_Count(queue);
        }
    }
    
    return 0;
}
