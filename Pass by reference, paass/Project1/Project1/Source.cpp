#include <iostream>	
#include <iomanip>
#include <string>
double converToCanadian(double amount);

using namespace std;

int main()
{
	double usAmount;
	cout << "Enter an amount is US currency: $ ";
	cin >> usAmount;
	cout << "$" << converToCanadian(usAmount) << "Canadian" << endl;


}

double converToCanadian(double amount)
{
	double cAmount = 0.77 * amount;
	return cAmount;

}
