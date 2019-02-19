#include <iostream>
using namespace std;

bool IsTri(int a, int b, int c)
{
	if (a >= b+c || b >= a+c || c >= a+c)
		return false;
	return true;
}

bool IsRightTri(int a, int b, int c)
{
	if (IsTri(a, b, c))
	{
		if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
			return true;
	}
	return false;
}

int main()
{
	int a, b, c;
	while(true)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
			
		if (IsRightTri(a, b, c))
			cout << "right\n";
		else
			cout << "wrong\n";
	}
	return 0;
}
