using namespace std;
#include <iostream>

void Display(int A[], int n);
void Radix_Sort(int A[], int n);

int main(int arg, char **argv)
{
	int A[] = { 170,87,2424,802,3008,4,17,61116,154,376,254321,256,37634,125,223,55,78,99,102,1109 };
	int n = sizeof(A) / sizeof(A[0]);
	cout << "Before sort: ";
	Display(A, n);
	Radix_Sort(A, n);
	cout << "After sort : ";
	Display(A, n);
	return 0;
}

int GetMax(int A[], int n)
{
	int max = A[0];
	for (int i = 1; i < n; i++)
		if (A[i] > max)
			max = A[i];
	return max;
}

void Radix_Sort(int A[],int n) 
{
	int temp[10][20] = {0};
	int order[20] = {0};

	int m = GetMax(A, n);
	int exp = 1;
	while (m/exp>0) 
	{
		for (int i = 0; i < n; i++) {
			int digit = (A[i] / exp) % 10;
			temp[digit][order[digit]] = A[i];
			order[digit]++;
		}

		int k = 0;
		for (int i = 0; i < n; i++) {
			if (order[i] != 0) {
				for (int j = 0; j < order[i]; j++) {
					A[k] = temp[i][j];
					k = k + 1;
					temp[i][j] = 0;
				}
			}
			order[i] = 0;
		}
		exp = exp * 10;
	}

}

void Display(int A[], int n) 
{
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}


