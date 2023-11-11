#include <iostream>

int main() {
    int t1 = 1, t2 = 1, nextTerm = 0;

    std::cout << "Série de Fibonacci: ";

    for (int i = 1; i <= 20; ++i) {
        if(i == 1) {
            std::cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            std::cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        std::cout << nextTerm << ", ";
    }
    return 0;
}
