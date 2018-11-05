#include <iostream>
#include <array>
using namespace std;

int Bisearch(int myarray[],int first, int last, int key);

int main(int argc, char** argv)
{	
	int c = 0;
    
	int A[15] = { 2,4,6,8,11,23,24,25,31,34,35,36,45,46,57 };
	cout << "For array A please enter one number: ";
	cin >> c;
	Bisearch(A, 0, 14, c);
	
	cout << "For array A please enter one number: ";
	cin >> c;
	Bisearch(A, 0, 14, c);
	
	int B[16] = { 3,5,7,9,10,13,17,19,21,23,29,31,37,41,43,47 };
	cout << "For array B please enter one number: ";
	cin >> c;
	Bisearch(B, 0, 15, c);
	
	cout << "For array B please enter one number: ";
	cin >> c;
	Bisearch(B, 0, 15, c);
    
	return 0;
}

int Bisearch(int myarray[], int first, int last, int key)
{
    if (first <= last)
	{
	 int mid = (first + last) / 2;          
	 if (key == myarray[mid])       
	 {
		 cout << "The number " << myarray[mid] << " is in the array." << endl;
		 return mid;
	 }
	 else if (key > myarray[mid])              //check the key value on the last half or not;
	 {
		 return Bisearch(myarray, mid+1, last, key);    // key is on the last half,check the last half of the array;
	 }
	 else 
	 {
		 return Bisearch(myarray, first, mid-1, key); //check the first half of array;
	 }
    }
	 cout << "The number " << key << " is not in the array."<<endl;
	 return -(first+1);
}