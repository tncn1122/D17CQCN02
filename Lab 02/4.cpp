#include <iostream>
using namespace std;

struct frac
{
	int numera;			//tu so
	int denomina;		//mau so
};

void running();
void cal(struct frac firstNum, struct frac secNum, char operat);

int main()
{
	running();
	return 0;
}


void cal(struct frac firstNum, struct frac secNum, char operat)
{
	int a = firstNum.numera;
	int b = firstNum.denomina;
	int c = secNum.numera;
	int d = secNum.denomina;
	switch (operat)
	{
		case '+':
			{
				cout <<"\n\tAnswer = ";
				cout << (a*d + b*c)/(b*d);
				break;
			}
		case '-':
			{
				cout <<"\n\tAnswer = ";
				cout << (a*d-b*c)/(b*d);
				break;
			}
		case '*':
			{
				cout <<"\n\tAnswer = ";
				cout <<	(a*c)/(b*d);
				break;
			}
		case '/':
			{
				if ( b == 0 || c == 0)
				{
					cout << "\n\tWrong number! ";
					break;
				}
				cout <<"\n\tAnswer = ";
				cout << (a*d)/(b*c);
				break;
			}
	}
}

void running()
{
	char choose = 'y', Op;
	struct frac fst, sec;
	do
	{
		cout << "\n\tEnter the Numerator and Denominator of the first Fraction: ";		//nhap phan so thu nhat
		cin >> fst.numera >> fst.denomina;
		if (fst.denomina == 0)
			{
				cout << "\n\tWrong!!";
				continue;
			}
			
		cout << "\n\tEnter the Operator: ";												//nhap phep tinh
		cin >> Op;
		
		cout << "\n\tEnter the Numerator and Denominator of the second Fraction: ";		//nhap phan so thu 2
		cin >> sec.numera >> sec.denomina;
		if (sec.denomina == 0)
			{
				cout << "\n\tWrong!!";
				continue;
			}
		
		cal(fst, sec, Op);																//tinh
		cout << "\n\tDo another (y/n)?";
		cin >> choose;
	}
	while(choose != 'n');
}
