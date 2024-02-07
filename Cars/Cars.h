#include <string>
using namespace std;

#pragma once
class Car {
	private:
		string make;
		string model;
		int year;

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
		string getMake() {
			return make;
		}
		string getModel() {
			return model;
		}
		int getYear() {
			return year;
		}
};