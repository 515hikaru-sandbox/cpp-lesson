#include <iostream>

template<typename T>
    T Abs(T a) {
        return a < 0 ? -a: a;
    }

int main() {
    std::cout << Abs(-10) << std::endl;
    std::cout << Abs(-0.11) << std::endl;
}
