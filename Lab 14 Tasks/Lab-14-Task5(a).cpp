#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outputFile("num.txt");

    outputFile << "\n66 33 16";
    outputFile << "\n13 29 12";
    
    outputFile.close();

    cout << "Data has been written to the file 'num.txt'." << endl;

    return 0;
}
