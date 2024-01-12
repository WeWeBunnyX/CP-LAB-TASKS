#include <iostream>
using namespace std;

int countEvens(const int numbers[], const int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] % 2 == 0) {
            ++count;
        }
    }
    return count;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    const int size = 9; 

    cout << "Number of even numbers: " << countEvens(numbers, size) << endl;

    return 0;
}
