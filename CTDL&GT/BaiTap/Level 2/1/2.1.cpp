#include <iostream>
using namespace std;

int X[40], D[40], B, n;
int ans[10000005][40], ansCnt = 0;
int sumX = 0;

// kiem tra vector nhi phan x phan tu D co tong bang B hay khong
bool CheckVec(int vec[], int d[], int b, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += vec[i]*d[i];
	return sum == b;
}

// sinh cac vector nhi phan do dai n va kiem tra cac vector do
//void Try(int i)
//{
//	for (int j = 0; j <= 1; j++)
//	{
//		X[i] = j;
//		if (i == n-1)
//		{
//			if (CheckVec(X, D, B, n))
//			{
//				for (int k = 0; k < n; k++)
//				{
//					ans[ansCnt][k] = X[k];
//				}
//				ansCnt++;
//			}
//		}
//		else
//			Try(i+1);
//	}
//}


// them nhanh can
void Try(int i)
{
	for (int j = 0; j <= 1; j++)
	{
		X[i] = j;
		sumX += j*D[i];
		if (sumX <= B)
		{
			if (i == n-1)
			{
				for (int k = 0; k < n; k++)
				{
					ans[ansCnt][k] = X[k];
				}
				ansCnt++;
			}
			else
				Try(i+1);
		}
		sumX -= j*D[i];
	}
}




//in ket qua
void Show(int vec[][40], int end)
{
	cout << end << endl;
	for (int i = 0; i < end; i++)
	{
		for (int j = 0; j < n; j++)
			cout << vec[i][j] << " ";
		cout << endl;
	}
}

int main()
{
//	freopen("data2.in", "r", stdin);
//	freopen("ketqua2.out", "w", stdout);
	cin >> n >> B;
	for (int i = 0; i < n; i++)
	{
		cin >> D[i];
	}
	Try(0);
	Show(ans, ansCnt);
//	fclose (stdin);
//	fclose (stdout);
	 
	return 0;
}
