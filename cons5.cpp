#include<bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;

public:

    Student(const string& studentName) : name(studentName) {
        cout << "Student " << name << " is created." << endl;
    }


    ~Student() {
        cout << "Student " << name << " is destroyed." << endl;
    }
};

int main() {
    Student student1("Johny");
    return 0;
}

