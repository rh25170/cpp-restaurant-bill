/* Filename: bill.cpp
*  Author: Ryan Hurd
*  Date: 2/5/2018
*  Purpose: Calculate the price of a restaurant bill
*/

#include <iostream>
using namespace std;

int main()
{
	double meal = 32.95;
	double tax;
	double subtotal;
	double tip;
	double total;

	tax = meal * (6.75/100);
	subtotal = meal + tax;
	tip = subtotal * (20.0/100);
	total = subtotal + tip;

	cout << "Meal:    " << meal << endl;
	cout << "Tax:     " << tax << endl;
	cout << "Tip:     " << tip << endl;
	cout << "Total Bill:     " << total << endl;
	


	system("pause");

	return 0;
}