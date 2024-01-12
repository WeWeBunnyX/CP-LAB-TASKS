#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string userWord;
    cout << "Enter a word: ";
    cin >> userWord;
   
    string reversedUserWord(userWord.rbegin(), userWord.rend());
    ofstream outputFile("output.txt");
    outputFile << reversedUserWord;
    outputFile.close();
    cout << "\nWords reversed and stored in 'output.txt'." << endl;
    return 0;
}
