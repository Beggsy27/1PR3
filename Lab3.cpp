Lab3.cpp:

// Nathan Beggs 400536751

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main() {

    const int empNum = 3;
    Employee array[empNum];

    for (int i = 0; i < empNum; i++) {
        string name = "", dep = "", pos = "";
        int idNum = 0;
        cout << "Enter the employee's name, department, position, and ID Number: ";
        cin >> name >> dep >> pos >> idNum;
        array[i].setName(name);
        array[i].setDep(dep);
        array[i].setPos(pos);
        array[i].setID(idNum);
        cout << array[i].getName() << " " << array[i].getDep() << " " << array[i].getPos() << " " << array[i].getID() << endl;
    }
}

Employee.cpp:

#include "Employee.h"

Employee::Employee() {
	name = "";
	dep = "";
	pos = "";
	idNum = 0;
}
Employee::~Employee() {

}

Employee.h:

#pragma once
#include <iostream>
#include <string>


using namespace std;

class Employee {
private:
    string name = "", dep = "", pos = "";
    int idNum = 0;

public:
    Employee();
    ~Employee();
    string getName() {
        return name;
    };
    string getDep() {
        return dep;
    };
    string getPos() {
        return pos;
    };
    int getID() {
        return idNum;
    };
    void setName(string n) {
        name = n;
    };
    void setDep(string d) {
        dep = d;
    };
    void setPos(string p) {
        pos = p;
    };
    void setID(int id) {
        idNum = id;
    };
};
