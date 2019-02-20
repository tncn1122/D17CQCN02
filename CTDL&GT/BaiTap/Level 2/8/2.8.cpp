#include <iostream>
using namespace std;

int A[200005], B[105];
int n, sizeB = 100;

void InIt(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		cin >> arr[i];
}


void Compress(int arr[], int n, int *b)
{
	for (int i = 0; i < n; i++)
		b[i] = 0;
		
	for (int i = 0; i < n; i++)
	{
		b[arr[i]]++;
	}
}

int main()
{
	cin >> n;
	InIt(A, n);
	Compress(A, n, B);
	for (int i = 0; i < sizeB; i++)
	{
		if (B[i] != 0)
			cout << i << B[i];
	}
	
}
