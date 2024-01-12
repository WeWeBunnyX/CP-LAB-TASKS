#include <iostream>
#include <string>
using namespace std;
struct Phone {
    string areaCode;
    string exchange;
    string number;
};
int main() {

    Phone myPhone, yourPhone;

    cout << "Enter my area code, exchange, and number: ";
    cin >> myPhone.areaCode >> myPhone.exchange >> myPhone.number;

    cout << "Enter your area code, exchange, and number: ";
    cin >> yourPhone.areaCode >> yourPhone.exchange >> yourPhone.number;

    cout << "My number is (" << myPhone.areaCode << ") " << myPhone.exchange << "-" << myPhone.number << endl;
    cout << "Your number is (" << yourPhone.areaCode << ") " << yourPhone.exchange << "-" << yourPhone.number << endl;
    
    return 0;

}
