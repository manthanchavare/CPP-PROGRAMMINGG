#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    int marks;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.name = "Riya";
    s.rollNo = 1;
    s.marks = 85;
    s.display();
    return 0;
}
