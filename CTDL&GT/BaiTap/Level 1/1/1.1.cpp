#include <iostream>
#include <math.h>      // sqrt()
using namespace std;

// a.
bool isPrime(int num)
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
void printFirstPrimes(int n)
{
	int num = 2;
	while(n > 0)
	{
		if (isPrime(num))
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
	printFirstPrimes(n);
	return 0;
}
