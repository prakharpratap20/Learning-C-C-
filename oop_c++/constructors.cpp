#include <iostream>

using namespace std;

class Employee {
    public:
    string Name;
    string Company;
    int Age;

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void Introduction() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
};

int main() {
    Employee employee1("Prakhar", "Orbit", 22);
    employee1.Introduction();

    Employee employee2("John", "Orbit1", 23);
    employee2.Introduction();

}