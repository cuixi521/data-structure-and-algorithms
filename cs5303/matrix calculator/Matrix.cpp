using namespace std;
#include "Matrix.h"
#include<iostream>
#include<iomanip>

Matrix::Matrix() 
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			data[i][j] = 0;
		}
	}
}

void Matrix::Load(Matrix &a) 
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a.data[i][j];
		}
	}
}

Matrix Matrix::operator+(Matrix other) 
{
	Matrix add;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			add.data[i][j] = data[i][j] + other.data[i][j];
		}
	}
	return add;
}

Matrix Matrix::operator*(Matrix other) {
	Matrix multiply;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				multiply.data[i][j] += data[i][k] * other.data[k][j];
			}
		}
	}
	return multiply;
}

void Matrix::Show() {
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				cout << "|" << setw(5) << data[i][j] ;
			}
			else if (j == 2) {
				cout << setw(5) << data[i][j] << "|" << endl;
			}
			else
				cout << setw(5) << data[i][j];
		}
	cout << endl;
}


