#include <iostream>

using namespace std;

class Employee {
    public:
    string Name;
    string Company;
    int Age;

    void Introduction() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
};

int main() {
    Employee employee1;
    employee1.Name = "Prakhar";
    employee1.Company = "Orbit";
    employee1.Age = 22;
    employee1.Introduction();

    Employee employee2;
    employee2.Name = "John";
    employee2.Company = "Orbit1";
    employee2.Age = 23;
    employee2.Introduction();

}