#include<iostream>
using namespace std;

class SerialNum
{
	static int count;
	int serial;
public:
	SerialNum() 
	{ 
	static int count = 0;
	serial = ++count;
	}
	
	void DisplayObj() const 
	{ 
	cout << "I am object number " << serial << ".\n";
	}
};

int main()
{	
	char key;
	do
	{
		SerialNum obj[3];
		for(int i = 0; i < 3; i++) 
			obj[i].DisplayObj();

		cout<<"\nContinue? (y/n): ";
		cin >> key;

	}while(key == 'y' || key == 'Y');
	return 0;
}
