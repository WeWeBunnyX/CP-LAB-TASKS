#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream MyFile("Data.txt");

    MyFile << "Name, Age, CGPA, DOB, PlaceOfBirth\n";
    while (true) {
        cout << "Enter data in order : Name, Age, CGPA, DOB, PlaceOfBirth  (or 'x' to stop): ";
        string input;
        getline(cin, input);

        if (input == "x") {
            break;
        }

        MyFile << input << "\n";
    }

    return 0;
}
