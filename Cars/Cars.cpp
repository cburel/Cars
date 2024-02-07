#include "Cars.h"
#include <iostream>
using namespace std;

int main()
{
    Car newCar;
    newCar.setMake("Toyota");
    newCar.setModel("Camry");
    newCar.setYear(2009);

    cout << newCar.getMake() << " " << newCar.getModel() << " " << newCar.getYear() << endl;

    return 0;
}
