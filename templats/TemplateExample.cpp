#include <iostream>
using namespace std;

template <typename TYPE>
    void fillArray(TYPE *array, size_t size, TYPE value) {
        for(size_t i = 0; i < size; i++) {
            array[i] = value;
        }
    }

int main() {
    int a[5];
    fillArray(a, 5, 1);
    for(int i = 0; i < 5; i++) cout << a[i] << endl;
}
