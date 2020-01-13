#include <iostream>
#include <string>

using namespace std;

int getYears(double start, double goal);

int main()
{
	
	string name = "Oleksandr";
	int age = 111;
	double income = 40000;

	
	if (age < 55) {
		cout << "You aren't allowed to smoke ";
	}
	else
	{
		cout << "You may smoke on your own risk " << endl;
	}

	double start = 40000;
	double goal = 50000;
	int years = getYears(start, goal);
	cout << "It is going to take you " << years << " years to get $50000 goal." << endl;

}



int getYears(double start, double goal)
{
	int years = 1;
	while (start <= goal)
	{
		start *= (1 + 0.05);
		years++;
	}
	return years;

}