#include <iostream>
#include <string>

using namespace std;

void swapChars(string &s, int i, int j) {
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

void permute(string &s, int i) {
    if (s[i] == '\0') {
        cout << s << endl;
        return;
    }

    for (int j = i; s[j] != '\0'; j++) {
        swapChars(s, i, j);
        permute(s, i + 1);
        swapChars(s, i, j);
    }
}

int main() {
    string str = "ABC";

    cout << "All the permutations of " << str << ":" << endl;
    permute(str, 0);

    return 0;
}
