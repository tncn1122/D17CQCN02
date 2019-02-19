#include <iostream>
using namespace std;
#define MAX 100
int n;
long factorial[MAX+1];

void Prepare()
{
	factorial[0] = 1;
	for (int i = 1; i <= n; i++)
		factorial[i] = i*factorial[i-1];
}

//float Tinh_E (int n)
//{
//	float E = 0;
//	long gt;
//	for (int i = 1; i <= n; i++)  //i <= n
//	{
//		gt = 1;
//		for (int j = 1; j <= i; j++) // for (int j=1; j<=n; ) gt= gt *j;
//			gt = gt*j;
//		E = E + 1.0*(2*i-1)/gt;      // E= E + (2*i-1)/gt;
//
//	}
//	return E;
//} 

float Tinh_E (int n)
{
	float E = 0;
	for (int i = 1; i <= n; i++)
	{
		E += static_cast<float>(2*i-1)/factorial[i];  //ep kieu so thuc
		// hoac E += 1.0*(2*i-1)/factorial[i];
	}
	return E;
}

int main()
{
	cin >> n;
	Prepare();
	cout << Tinh_E(n);
	 
	return 0;
}
