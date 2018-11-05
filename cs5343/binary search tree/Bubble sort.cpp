using namespace std;
#include <iostream>
#include <array>

void Bubblesort(int *a, int len);
void Display(int *A);

int main(int argc, char** argv)
{
	int A[15] = { 8,2,18,19,23,47,4,11,25,7,45,6,13,34,1}; //insert random numbers into the array and hard code the array.
	Display(A); //Display the array before starting the sort.
	cout << endl;
	Bubblesort(A, 15);
	cout << endl;
	Display(A);//Display the array after the sort.
	
	return 0;
}

void Bubblesort(int *a, int len) {
	int i, temp;
	bool swapped = true;

	while (swapped == true) 
	{
		swapped = false;
		for (i = 0; i <len - 1; i++) 
		{
			if (a[i] > a[i + 1]) 
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				swapped = true;
			}
		}
		Display(a); //Display the array after each pass.
	}
}

void Display(int *myarry)
{
	int i = 0;
	for (i = 0; i < 15; i++)
	{
		cout << myarry[i] << " ";
	}
	cout << endl;
}