#include <iostream>

using namespace std;

class Employee {
private:
    string Name;
    string Company;
    int Age;

public:
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
    
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age >= 18) {
            Age = age;
        }
    }
    int getAge() {
        return Age;
    }

};

int main() {
    Employee employee1("Prakhar", "Orbit", 22);
    employee1.Introduction();

    Employee employee2("John", "Orbit1", 23);
    employee2.setAge(19);
    employee2.Introduction();

    cout << employee1.getName() << endl;

}