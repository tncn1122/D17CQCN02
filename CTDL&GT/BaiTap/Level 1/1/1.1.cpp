#include <iostream>
#include <math.h>      // sqrt()
using namespace std;

// a.
bool IsPrime(int num)
{
	if (num < 2)
		return false;
	else
	{
		for (int i = 2; i <= sqrt(num); i++)
		{
			if (num%i == 0)
				return false;
		}
		return true;
	}
}

// b.
void PrintFirstPrimes(int n)
{
	int num = 2;
	while(n > 0)
	{
		if (IsPrime(num))
		{
			n--;
			cout << num << " ";
		}
		num++;
	}
}

int main()
{
	int n;
	cin >> n;
	PrintFirstPrimes(n);
	return 0;
}
