#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int fixSizeArray[20];
    int arrayNums[] = {1, 2, 3, 4, 5, 6, 7};

    cout << arrayNums[1] << endl;

    arrayNums[1] = 5;

    cout << arrayNums[1];
    return 0;
}