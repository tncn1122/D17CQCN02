#include <iostream>
#include <math.h>      // sqrt()
using namespace std;

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

bool isRev(int num)
{
	int rev = 0;
	int x = num;
	while(x > 0)
	{
		rev *= 10;
		rev += x%10;
		x /= 10;
	}
	if (num == rev)
		return true;
	else	
		return false;
}

int countNum(int a, int b)
{
	int cnt = 0;
	for ( ;a <= b; a++)
	{
		if (isRev(a) && isPrime(a))
		{
			cnt++;
		}
	}
	return cnt;
}

int main()
{
	
	int A, B;
//	freopen("Dulieu.in", "r", stdin);
//	freopen("KQ.out", "w", stdout);
	cin >> A >> B;
	cout << countNum(A, B);
//	fclose (stdin);
//	fclose (stdout);
	 
	return 0;
}
