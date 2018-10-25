#include <iostream>
#include <iomanip>
using namespace std;

class money
{
	private:
		int initAmount;
		int year;
		float rate;
	public:
		void Input();
		void Output();
		float total()
		{
			float totalM = initAmount;
			for (int i =0; i < year; i++)
				totalM += totalM * (rate/100);
			return totalM;
		}
};

int main()
{
	money user;
	user.Input();
	user.Output();
	return 0;
}

void money::Input()
{
	cout << "\tEnter initial amount: ";
	cin >> initAmount;
	cout << "\n\tEnter number of years: ";
	cin >> year;
	cout << "\n\tEnter interest rate (percent per year): ";
	cin >> rate;
}

void money::Output()
{
	
	cout << fixed << setprecision(2) << "\n\tAt the end of " << year << " years, you will have " << total() << " dollars.";
}

