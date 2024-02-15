#include "Cars.h"
#include <iostream>
#include <list>
using namespace std;

int main()
{
    bool running = true;
    string selection;
    list<Car> carList;

    cout << "Welcome!" << endl;

    while (true) {


        cout << "Press 1 to add a car. Press 2 to view your cars. Press 3 to exit." << endl;
        getline(cin, selection);

        if (selection == "1") {

            Car newCar;
            string inputMake;
            string inputModel;
            string inputYear;

            cout << "What is the make of your car?" << endl;
            getline(cin, inputMake);
            cout << "What is the model?" << endl;
            getline(cin, inputModel);
            cout << "What is the year?" << endl;
            getline(cin, inputYear);


            newCar.setMake(inputMake);
            newCar.setModel(inputModel);
            newCar.setYear(stoi(inputYear));

            carList.push_front(newCar);

            cout << "You added a " << newCar.getYear() << " " << newCar.getMake() << " " << newCar.getModel() << " to the collection." << endl;
        }
        else if (selection == "2") {
            for (list<Car>::iterator it = carList.begin(); it != carList.end(); ++it) {
                cout << *it << endl;
            }
        }
        else if (selection == "3") {
            cout << "Goodbye!" << endl;
            return 0;
        }
        else {
            cout << "Invalid selection. Please try again." << endl;
        }
    }

    return 0;
}
