#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("input.txt");
    string word;
    int count = 0;

    while (inputFile >> word) {
        count++;
    }

    inputFile.close();

    cout << "Number of words in the file: " << count << endl;

    return 0;
}
