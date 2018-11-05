using namespace std;
#pragma once
#include <vector>

class Counter
{
private:
	vector <int> table = {0,0,0,0,0,0,0,0,0,0,0};
public:
	Counter();
	void Increment(int index);
	void ShowCount();
	int Normalization(int index);
	~Counter();
};

