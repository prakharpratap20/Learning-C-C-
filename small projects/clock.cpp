#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    int h, m, s, err;
    err = 0;
    
    while (err == 0) {
        cout << "Enter Hour: " << endl;
        cin >> h;
        cout << "Enter Minutes: " << endl;
        cin >> m;
        cout << "Enter Seconds: " << endl;
        cin >> s;
        if (h < 24 && m < 60 && s < 60)
            err++;
        else 
            system("clear");
    }
    while (true) {
        system("clear");
        cout << h << ":" << m << ":" << s << endl;
        sleep(1);
        s++;
        if (s >= 59) {
            s = 0;
            m++;
        }
        if (m >= 59) {
            m = 0;
            h++;
            if (h >= 24) {
                h = 0;
            }
        }
    }
    return 0;
}