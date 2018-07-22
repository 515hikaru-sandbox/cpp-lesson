#include <iostream>
using namespace std;

template<typename T>
    T Abs(T a) {
        return a < 0 ? -a: a;
    }

int main() {
    cout << Abs(-10) << endl;
    cout << Abs(-0.11) << endl;
}
