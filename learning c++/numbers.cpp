#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int wnum = 5;
    double dnum = 5.5;
    
    wnum ++;
    
    cout << wnum << endl;
    cout << 5 + 5 * 10 << endl;

    cout << pow(2, 5) << endl;
    cout << sqrt(5) << endl;
    cout << round(5.6) << endl;
    cout << ceil(5.6) << endl;
    cout << floor(5.6) << endl;
    cout << fmin(5, 6) << endl;
    return 0;
}