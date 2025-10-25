#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;

    void display() {
        cout << id << " " << name << " " << marks << endl;
    }
};

int main() {
    Student s1 = {101, "Amir", 88.5};
    s1.display();
}

