#include<iostream>

using namespace std;
int main() {
	double currentsalary;
	double incrementpercentage;
	double bonuspercentage;
	int years;
	int exceptionalratings;

	do {
		cout << "Enter the amount  of current salary";
		cin >> currentsalary;

		if (currentsalary <= 0) {
			cout << "Please enter a positive amount";
		}
	} while (currentsalary <= 0);

	do {
		cout << "Enter the yearly increment";
		cin >> incrementpercentage;

		if (incrementpercentage < 0) {
			cout << "Please Enter a valid Percentage";
		}

	} while (incrementpercentage<0);

	do {
		cout << "Enter bonus percentage";
		cin >> bonuspercentage;
		if (bonuspercentage < 0) {
			cout << "Please enter a valid input";
		}

	} while (bonuspercentage < 0);

	do {
		cout << "Enter the number of Years";
		cin >> years;
		if (years < 0)
			cout << "Please enter a valid year";
	} while (years < 0);

	for (int i = 0; i <= years; years++) {
		cout << "years" << i << "=" << endl;
		cout << "currentsalary" << currentsalary << endl;
		cout << "Enter Employ ratings";
		cin >> exceptionalratings;
		

		if (exceptionalratings == 1) {
			double bonus = currentsalary * (bonuspercentage / 100);
			currentsalary += bonus;

			cout << "Performance Bonus" << bonus << "(2%)" << endl;
		}
		double increment = currentsalary * (incrementpercentage / 100);
		currentsalary += increment;

		cout << "yearly increment" << increment << "(" << incrementpercentage << "%)" << endl;
		cout << "Total salary" << currentsalary << endl;
	}
	return 0;
}
