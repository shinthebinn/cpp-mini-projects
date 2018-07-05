#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const string nl = "\n";

int main() {
	double height;
	double weight;
	double BMI;
	cout << "What is your weight in pounds?";
	cin >> weight;
	cout << nl;
	cout << "What is your height in inches?";
	cin >> height;
	cout << nl;
	BMI = weight / std::pow(height, 2) * 703;
	cout << "Your BMI is " << BMI << nl;
}
