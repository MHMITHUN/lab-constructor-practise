#include <bits/stdc++.h>
using namespace std;
class Calculator {
private:
    int number1;
    int number2;

public:
    Calculator(int num1, int num2) {
        number1 = num1;
        number2 = num2;
    }

    int getSum() {
        return number1 + number2;
    }

    int getDifference() {
        return number1 - number2;
    }

    int getProduct() {
        return number1 * number2;
    }
};

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    Calculator calculator(num1, num2);

    cout << "Sum: " << calculator.getSum() << endl;
    cout << "Difference: " << calculator.getDifference() << endl;
    cout << "Product: " << calculator.getProduct() <<endl;

    return 0;
}

