#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outputFile("sum.txt");

    int num1, num2, num3, sum;

    cout << "Enter three numbers separated by spaces: ";
    while (cin >> num1 >> num2 >> num3) {
        sum = num1 + num2 + num3;
        outputFile << sum << endl;

        cout << "Enter three numbers separated by spaces: ";
        outputFile.close();
        cout <<"Check 'sum.txt' for results." << endl;
        break;
    }
    

    return 0;
}
