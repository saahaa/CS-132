#include <iostream>
#include <string>

using namespace std;

int getYears(double start, double goal);

int main()
{
	
	string name = "Geo";
	int age = 22;
	double income = 3200;

	
	if (age < 21) {
		cout << "You can't buy alcohol ";
	}
	else
	{
		cout << "You can drink on your own risk " << endl;
	}

	
	double start = 40000;
	double goal = 50000;
	int years = getYears(start, goal);
	cout << "It will take you " << years << " years to get $50000 goal." << endl;

	return 0;
}

int getYears(double start, double goal)
{
	int years = 0;
	
	while (start <= goal)
	{
		start = start + start*0.05;
		years++;
	}
	return years;

}