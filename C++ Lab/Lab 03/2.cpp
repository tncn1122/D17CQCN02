#include <iostream>
#include <iomanip>

using namespace std;

class employee{
private:
	int empNumber;
	float empComp;
	float empRate;
public:
	void InputData()
	{
		cout << "\tEmployee\'s Number: ";
		cin >> empNumber;
		cout << "\tEmployee\'s Compensation Rate: " ;
		cin >> empRate;
		cout << "\tEmployee\'s Compensation: " ;
		cin >> empComp;
	}
	
	void Display()
	{
	cout << "\tEmployee\'s Number: " << empNumber << endl;
	cout << "\tEnployee\'s Compensation: " << fixed << setprecision(3) << empComp << endl;
	}
	
	void CalComp(int year)
	{
		for (int i = 0; i < year; i++)
			empComp += empComp*empRate;
	}
};

int main()
{
	employee empNo[3];
	int year;
	for (int i = 0; i < 3; i++)
	{
	 	cout << "Enter Data For Employee " << i+1 << ":\n";
	 	empNo[i].InputData();
	}
	
	cout << "\nEnter the number of years: ";
	cin >> year;
	for (int i = 0; i < 3; i++)
	{
	 	empNo[i].CalComp(year);
	}
	
	cout << "\n\nNow, here are the Compensation of Employees after " << year;
	if (year >= 2)
		cout << " years:\n";
	else
		cout << " year:\n";	
		
	for (int i = 0; i < 3; i++)
	{
	 	cout << "\nEmployee: " << i+1 << endl;
	 	empNo[i].Display();
	}
	return 0;
}
