#include <string>
using namespace std;

#pragma once
class Car {
	private:
		string make;
		string model;
		int year;
		int vin;

	public:
		void setMake(string m) {
			make = m;
		}
		void setModel(string m) {
			model = m;
		}
		void setYear(int i) {
			year = i;
		}
		void setVIN(int i) {
			vin = i;
		}
		string getMake() {
			return make;
		}
		string getModel() {
			return model;
		}
		int getYear() {
			return year;
		}
		int getVIN() {
			return vin;
		}

		bool operator == (const Car& car) const { return (make == car.make) && (model == car.model) && (year == car.year) && (vin == car.vin); }

		friend ostream& operator << (ostream &os, const Car &car) {
			return os << to_string(car.year) + " " + car.make + " " + car.model + " " + to_string(car.vin);
		}
};