using namespace std;
#include <iostream>
#include <vector>
#include <string>


void your_output_name_function();
void your_menu_function();

int main(int argument_count, char ** argument_vector)
{
	your_output_name_function();
	your_menu_function();
	return 0;
}

void your_output_name_function()
{
	cout << "Xi Cui \n"
		 << "Program #2 \n"
		 << "09/18/2016 \n";
	cout << "================\n";
}

vector <double> Input_Vector();
vector <double> myVector = {};
void Show_Vector(vector <double> myVector);
double Find_Min(vector<double> myVector);
double Find_Max(vector<double> myVector);
double Total(vector<double> myVector);
double Average(vector<double>myVector);
double Variance(vector<double> myVector);
double Standard_Deviation(vector<double> myVector);


void your_menu_function()
{ 	
	
	
	bool done = false;
    while (!done) 
	{
		cout << "\n";
		cout << "1. Input Vector\n";
		cout << "2. Show Vector\n";
		cout << "3. Find Min\n";
		cout << "4. Find Max\n";
		cout << "5. Total\n";
		cout << "6. Average\n";
		cout << "7. Variance\n";
		cout << "8. Standard Deviation\n";
		cout << "9. Quit\n";
		cout << "----------------\n";
		
		int choice = 0;
		cin >> choice;
		
		switch (choice)
		{
		case 1: 
			myVector = Input_Vector(); break;
		case 2: 
			Show_Vector(myVector); break;
		case 3: 
		    Find_Min(myVector); break;
		case 4: 
            Find_Max(myVector); break;
		case 5:
			Total(myVector); break;
		case 6: 
			Average(myVector); break;
		case 7: 
			Variance(myVector); break;
	    case 8: 
		    Standard_Deviation(myVector); break;
	    case 9:
			done = true; break;

		}
		

	}

}


vector <double> Input_Vector()
{
	vector <double> resualt = {};
	bool done = false;
	string inputstring = "";
	double temp = 0.0;

	cout << "Please enter one or more floating point numbers\n";
	cout << "when finished, enter 'q'\n";

	while (!done)
	{
		cin >> inputstring;

		if (inputstring[0] == 'q')
		{
			done = true;
		}
		else
		{
			temp = stod(inputstring);
			resualt.push_back(temp);
		}


	}

	return resualt;
}



void Show_Vector(vector <double> myVector)
{
	for (double element : myVector)
	{
		cout << element << "\n";
	}
	

}

double Find_Min(vector<double> myVector)
{
	double minimum = 1000000.0;

	for (double element : myVector)
	{
		if (minimum > element)
		{
			minimum = element;
		}
	}
	cout << "The minimum is: " << minimum << "\n";
	

	return minimum;
}

double Find_Max(vector<double> myVector)
{
	double maximum = -1000000.0;

	for (double element : myVector)
	{
		if (maximum < element)
		{
			maximum = element;
		}
	}
	cout << "The maximum is: " << maximum<<"\n";
	
	return maximum;
}

double Total(vector<double> myVector)
{
	double sum = 0.0;
	for (double element : myVector)
	{
		sum = sum + element;
	}
	cout << "The total is: " << sum << "\n";
	
	return sum;
}

double Average(vector<double> myVector)
{
	double mean = 0.0;
	double sum = 0.0;
	int n = 0;
	n = myVector.size();
	sum = Total(myVector);
	mean = sum / n;
    cout << "The average is: " << mean << "\n";
    
	return mean;
}

double Variance(vector<double> myVector)
{
	double var = 0.0;
	double mean = 0.0;
	int n = 0;
	n = myVector.size();
	mean = Average(myVector);
	double dis = 0.0;
	//double sumdis = 0.0;
	for (double element : myVector)
	{
		dis = dis+(element-mean)*(element-mean);
		//sumdis = sumdis + dis*dis;
	}
	var = dis / n;
	cout << "The variance is: " << var << "\n";
	return var;
}

double Standard_Deviation(vector<double> myVector)
{
	double var = 0.0;
	double sd = 0.0;
	var = Variance(myVector);
	sd = sqrt(var);
	cout << "The standard deviation is: " << sd << "\n";
	
	return sd;
}