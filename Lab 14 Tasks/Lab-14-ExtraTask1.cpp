#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    string word;

    while (inputFile >> word) {
        outputFile << word << " ";
    }

    cout << "Words reversed and stored in 'output.txt'." << endl;

    return 0;
}
