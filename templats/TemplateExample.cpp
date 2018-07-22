#include <iostream>
using namespace std;

template <typename TYPE>
    void fillArray(TYPE *array, size_t size, TYPE value) {
        for(size_t i = 0; i < size; i++) {
            array[i] = value;
        }
    }

template <typename TYPE_A, typename TYPE_B>
    void Show(TYPE_A a, TYPE_B b) {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }

int main() {
    int a[5];
    fillArray(a, 5, 1);
    for(int i = 0; i < 5; i++) cout << a[i] << endl;
    Show(6, 9.3);
    Show("foo", 45);
}
