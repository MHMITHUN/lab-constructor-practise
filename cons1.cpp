#include<bits/stdc++.h>
using namespace std;
class Car
{
private:
    string brand;
    string model;
    int year;
    double mileage;

public:

    Car(const string& brand, const string& model, int year, double mileage)
        : brand(brand), model(model), year(year), mileage(mileage) {}

    ~Car()
    {
        cout << "Car object destroyed.\n";
        cout << "Brand: " << brand << "\n";
        cout << "Model: " << model << "\n";
        cout << "Year: " << year << "\n";
        cout << "Mileage: " << mileage << "\n";
    }
};

int main()
{
    Car myCar("Toyota", "Camry", 2023, 20000.5);

    return 0;
}
