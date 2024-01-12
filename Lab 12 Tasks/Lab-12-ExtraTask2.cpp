#include <iostream>
#include <string>
using namespace std;

bool Palindrome(string str) {
    int start = 0;
    int end = str.length() - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void palindrome_pairs(const string words[], const int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (Palindrome(words[i] + words[j]) && Palindrome(words[j] + words[i])) {
                cout << "(" << words[i] << ", " << words[j] << ")" << endl;
            }
        }
    }
}

int main() {
    int numWords;
    cout << "Enter the number of words: ";
    cin >> numWords;

    string* words = new string[numWords];

    cout << "Enter " << numWords << " words:" << endl;
    for (int i = 0; i < numWords; ++i) {
        cout << "Word " << i + 1 << ": ";
        cin >> words[i];
    }

    cout << "Palindrome pairs:" << endl;
    palindrome_pairs(words, numWords);

    delete[] words;

    return 0;
}
