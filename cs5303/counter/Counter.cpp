using namespace std;
#include <iostream>
#include "Counter.h"





Counter::Counter()
{
	//cout << "Counter Created" << endl;
	int loop;
	for (loop = 0; loop < 11; ++loop)
	{
		table[loop] = 0;
	}

}

void Counter::Increment(int index)
{
	int local_index = 0;
	local_index = index - 2;
	table[local_index]++;
	return;
}

void Counter::ShowCount()
{
	for (int iocal_index=0; iocal_index<11;++iocal_index)
	{
		cout << iocal_index +2 <<"| "<<table[iocal_index] << endl;
	}
	return;
}

int Counter::Normalization(int index)
{
	index = table[index - 2] / 1000;
	return index;
}


Counter::~Counter()
{
}
