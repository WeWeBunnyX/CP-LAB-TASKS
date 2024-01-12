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
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (Palindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }
    return 0;
}