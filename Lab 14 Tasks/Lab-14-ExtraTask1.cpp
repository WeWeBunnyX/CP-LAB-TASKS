
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {

    ifstream inputFile("input.txt");
    ofstream outputFile("temp.txt");
    string word;

    while (inputFile >> word) {
        string tempWord;
        ifstream tempInput("temp.txt");
        ofstream tempOutput("output.txt");
        
        tempOutput << word << " ";
        while (tempInput >> tempWord) {
            tempOutput << tempWord << " ";
        }
        tempOutput.close();
        tempInput.close();
        remove("temp.txt");
        rename("output.txt", "temp.txt");
    }
    rename("temp.txt", "output.txt");
    inputFile.close();
    outputFile.close();
    cout << "\nWords reversed and stored in 'output.txt'." << endl;
    return 0;
}
