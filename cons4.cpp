#include <bits/stdc++.h>
using namespace std;

class Show {
private:
    int data1;
    int data2;

public:
    Show(int value1, int value2) : data1(value1), data2(value2) {
        cout << "Show object created with data1 = " << data1 << " and data2 = " << data2 << endl;
    }
    ~Show() {
        cout << "Show object with data1 = " << data1 << " and data2 = " << data2 << " is being destroyed." << endl;
    }
};

int main() {
    Show obj1(10, 20);
    Show obj2(30, 40);
    return 0;
}
