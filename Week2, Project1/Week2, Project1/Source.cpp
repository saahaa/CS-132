#include <iostream>
#include <iomanip>

template <typename T1, typename T2>
double avg(T1 x, T2 y);

using namespace std;

int main() 
{
	cout << avg(5, 1.6) << endl;

}

template <typename T1, typename T2>
double avg(T1 x, T2 y)
{
	return (x + y) / 2.0;
}
