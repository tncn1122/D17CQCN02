#include <iostream>
#include <algorithm>	
#include <time.h>
using namespace std;

int A[30005]; 

void CreateRandomArr(int *Arr, int n, int range)
{
	// khoi tao day so tu 1 den range;
	for (int i = 0; i < range; i++)
		Arr[i] = i+1;
	
	srand(time(0)); // tao seed random
	for (int i = 0; i <= n; i++)
	{
		int x = rand() % range;
		swap(Arr[i], Arr[x]);
	}
}

void BubbleSort(int *Arr, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (Arr[j] > Arr[j+1])
			{
				swap(Arr[j], Arr[j+1]);
			}
		}
	}
}

void InsertionSort(int *Arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		// 
	}
}

void QuickSort(int *Arr, int left, int right) {
	int i = left, j = right;
	
	//chon phan tu chot ngau nhien
	int pivot = Arr[left + rand() % (right - left)];
	// chia day thanh 2 phan
	while (i <= j) {
		while (Arr[i] < pivot) ++i;
		while (Arr[j] > pivot) --j;

		if (i <= j) {
			swap(Arr[i], Arr[j]);
			++i;
			--j;
		}
	}
	// de quy de sap xep cac nua
	if (left < j) QuickSort(Arr, left, j);
	if (i < right) QuickSort(Arr, i, right);
}

void ShowArr(int Arr[], int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << Arr[i] << " ";
	cout << endl;
}


int main()
{
	int n, range;
	cin >> n >> range;
	CreateRandomArr(A, n , range);
	ShowArr(A, n);
//	BubbleSort(A, n);
	QuickSort(A, 0, n);
	ShowArr(A, n);
	return 0;
}
