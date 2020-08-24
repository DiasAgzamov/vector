#include <iostream>
#include <vector>

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
            if (come >= 0) {
                for (int c = 0; c < come; ++c) {
                    queue.push_back(false);
                }
            } else {
                for (int c = 0; c > come; --c) {
                    queue.pop_back();
                }
            }
        } else if (oper == "worry") {
            std::cin >> worry;
            queue[worry] = true;
        } else if (oper == "quiet") {
            std::cin >> quiet;
            queue[quiet] = false;
        } else if (oper == "worry_count") {
            int wc = 0;
            for (auto w : queue) {
                if (queue[w] == 1) {
                    wc++;
                }
            }
            std::cout << wc << std::endl;
        }
    }


    return 0;
}
