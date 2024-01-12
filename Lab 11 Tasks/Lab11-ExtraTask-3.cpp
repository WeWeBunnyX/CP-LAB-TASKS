#include <iostream>
#include <string>

using namespace std;

bool Palindrome(string str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;  
        }
        left++;
        right--;
    }

    return true;  
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    if (Palindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
