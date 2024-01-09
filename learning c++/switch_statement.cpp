#include <iostream>

using namespace std;

string getDayOfTheWeek(int dayNum) {
    string dayName;

    switch (dayNum) {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    default:
        dayName = "Invalid Day Number";
    }

    return dayName;
}

int main() {
    cout << getDayOfTheWeek(0);

    return 0;
}