#pragma once
class Matrix
{
private:
	int data[3][3];
public:
	Matrix();
	void Load(Matrix &a);
	Matrix operator +(Matrix other);
	Matrix operator *(Matrix other);
	void Show();
}; 

