using namespace std;
#include<iostream>

void swap(int *a, int *b);
void BuildHeap(int A[],int len);
void HeapifyMax(int A[], int start, int end);
void HeapSort(int A[], int len);
void Display(int A[]);

int main()
{
	int len = 0;
	int A[15] = { 24,18,9,30,25,17,34,80,65,8,13,41,72,71,55 };
	cout << "Display array before heapify: " << endl;
	Display(A);
	len = (int) sizeof(A) / sizeof(*A);;
	BuildHeap(A,len);
	cout << "After heapify: " << endl;
	Display(A);
	cout << "Before heap sort: " << endl;
	Display(A);
	HeapSort(A, len);
	cout << "After heap sort: " << endl;
	Display(A);

	return 0;
}

void swap(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

void BuildHeap(int A[],int len)
{
	int i = 0;
	for (i = len / 2-1 ; i >= 0; i--)
	{
		HeapifyMax(A, i, len - 1);
	}
}

void HeapifyMax(int A[], int a, int end)
{
	int aleft = 2 * a +1;
	int aright = 2 * a +2;
	int max = a;

	if (aleft <= end&&A[a] < A[aleft]) 
	{
		max = aleft;
	}
	if (aright <= end&&A[max] < A[aright]) 
	{
		max = aright;
	}
	if (max != a) 
	{
		swap(A[max], A[a]);
		HeapifyMax(A, max, end);
	}

}

void HeapSort(int A[], int len)
{

	int i = 0;
	for (i = len - 1; i > 0; i--)
	{
		swap(A[i], A[0]);
		HeapifyMax(A, 0, i - 1);
	}
}

void Display(int A[])
{
	int i = 0;
	for (i = 0; i < 15; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}