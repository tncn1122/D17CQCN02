#include <iostream>
using namespace std;

struct phoneNumber
{
	char area[10];
	char exchange[10];
	char number[10];
};

void InputNumber(struct phoneNumber &num);
void OutputNumber (struct phoneNumber &num);

int main()
{
	struct phoneNumber yourPhone;
	InputNumber(yourPhone);
	OutputNumber(yourPhone);
	return 0;
}

void InputNumber(struct phoneNumber &num)
{
	cout << "\tEnter your area code, exchange, and number: ";
	cin >> num.area >> num.exchange >> num.number;
}
void OutputNumber (struct phoneNumber &num)
{
	cout << "\tMy number is (212) 767-8900";
	cout << "\n\tYour number is (" << num.area << ") " << num.exchange << "-" << num.number;
}
