#include <bits/stdc++.h>
using namespace std;
class Demo {
private:
    int num1;
    int num2;

public:

    Demo(int n1, int n2) : num1(n1), num2(n2) {
        cout << "Object created with num1 = " << num1 << " and num2 = " << num2 <<endl;
    }


    ~Demo() {
        cout << "Object with num1 = " << num1 << " and num2 = " << num2 << " is being destroyed." <<endl;
    }
};

int main() {

    Demo obj(10, 20);
    return 0;
}

