#include <iostream>
using namespace std;

class cal
{
	private:
		int firstNum;
		char operat;
		int secNum;
	public:
		void calculate();
		void Input()
		{
			cin >> firstNum >> operat >> secNum;
		}
};
	

void running();

int main()
{
	running();
	return 0;
}

void cal::calculate()
{
	switch (operat)
	{
		case '+':
			{
				cout <<"\n\tAnswer = ";
				cout << firstNum + secNum;
				break;
			}
		case '-':
			{
				cout <<"\n\tAnswer = ";
				cout << firstNum - secNum;
				break;
			}
		case '*':
			{
				cout <<"\n\tAnswer = ";
				cout << firstNum * secNum;
				break;
			}
		case '/':
			{
				if (secNum == 0)
				{
					cout << "\n\tWrong number! ";
					break;
				}
				cout <<"\n\tAnswer = ";
				cout << firstNum*1.0 / secNum;
				break;
			}
	}
}

void running()
{
	char choose = 'y';
	cal number;
	do
	{
		cout << "\n\tEnter first number, operator, second number: ";
		number.Input();
		number.calculate();
		cout << "\n\tDo another (y/n)?";
		cin >> choose;
	}
	while(choose != 'n');
}
