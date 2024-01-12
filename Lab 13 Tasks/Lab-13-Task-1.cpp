#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time tl;
    cout << "Enter the hours: ";
    cin >> tl.hours;

    cout << "Enter the minutes: ";
    cin >> tl.minutes;

    cout << "Enter the seconds: ";
    cin >> tl.seconds;

    long totalSecs = tl.hours * 3600 + tl.minutes * 60 + tl.seconds;

  
    cout << "Total seconds: " << totalSecs << std::endl;

    return 0;
}
