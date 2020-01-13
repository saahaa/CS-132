#include <iostream>
#include <string>

using namespace std;

int main()
{

	string name;
	cout << "Enter your full name: ";
	getline(cin, name);

	int age;
	cout << "Enter your age: ";
	cin >> age; 
	cin.ignore(100, '\n');
	cout << name << " is " << age << " years old." << endl;
	

	// input validation 
	int num;
	cout << "Enter 1, 2 or 3: ";
	cin >> num;
	cin.clear();
	// cin.ignore(100, '/n');

	while (num < 1 || num > 3)
	{
		cout << "Input error. Please try again ";
		cin >> num; 
		cin.clear();
		cin.ignore(100, '\n');
	}

}
