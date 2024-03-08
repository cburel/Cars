#include "Cars.h"
#include <iostream>
#include <list>
using namespace std;

int main()
{
    bool running = true;
    string selection;
    list<Car> cars;

    cout << "Welcome!" << endl;

    while (true) {

        cout << "Press 1 to add a car. Press 2 to view your cars. Press 3 to remove a car. Press 4 to exit." << endl;
        getline(cin, selection);

        if (selection == "1") {

            Car newCar;
            string inputMake;
            string inputModel;
            string inputYear;
            string inputVIN;

            cout << "What is the make of your car?" << endl;
            getline(cin, inputMake);
            cout << "What is the model?" << endl;
            getline(cin, inputModel);
            cout << "What is the year?" << endl;
            getline(cin, inputYear);
            cout << "What is the VIN?" << endl;
            getline(cin, inputVIN);


            newCar.setMake(inputMake);
            newCar.setModel(inputModel);
            newCar.setYear(stoi(inputYear));
            newCar.setVIN(stoi(inputVIN));

            cars.push_front(newCar);

            cout << "You added a " << newCar.getYear() << " " << newCar.getMake() << " " << newCar.getModel() << " with VIN " << newCar.getVIN() << " to the collection." << endl;
        }
        else if (selection == "2") {
            for (list<Car>::iterator it = cars.begin(); it != cars.end(); ++it) {
                cout << *it << endl;
            }
        }
        else if (selection == "3") {
            string vin;

            cout << "What is the VIN of the car you want to remove?" << endl;
            getline(cin, vin);

            for (list<Car>::iterator it = cars.begin(); it != cars.end(); ++it) {
                if (it->getVIN() == stoi(vin)) {
                    cars.remove(*it);
                    break;
                }
            }

        }
        else if (selection == "4") {
            cout << "Goodbye!" << endl;
            return 0;
        }
        else {
            cout << "Invalid selection. Please try again." << endl;
        }
    }

    return 0;
}
