using namespace std;
#include <iostream>


void Display(int A[][10]);
void MST(int A[10][10], int v);

int main(int arg, char **argv)
{
	int x = 9999999;
	int A[10][10] = 
	{x,6,x,1,x,x,x,x,3,x,
     6,x,10,x,9,3,x,x,x,x,
	 x,10,x,x,7,x,4,5,x,5,
	 1,x,x,x,2,2,x,x,x,x,
	 x,9,7,2,x,x,x,x,x,x,
	 x,3,x,2,x,x,x,8,15,x,
	 x,x,4,x,x,x,x,x,17,2,
	 x,x,5,x,x,8,x,x,x,10,
     3,x,x,x,x,15,17,x,x,20,
	 x,x,5,x,x,x,2,10,20,x
	};

	int B[10][10] = 
	{x,6,x,8,x,x,x,x,x,x,
	 x,x,x,1,x,x,x,x,x,x,
	 7,3,x,x,x,x,3,x,x,x,
	 x,x,6,x,x,11,x,x,x,x,
	 x,x,4,x,x,6,x,13,x,x,
	 x,x,x,x,x,x,x,16,8,x,
	 x,x,x,x,1,x,x,x,x,x,
	 x,x,x,x,x,x,x,x,10,x,
	 x,x,x,x,x,x,x,x,x,3,
	 x,x,x,x,x,x,x,x,x,x
	};

	Display(A);
	MST(A, 0);

	//Display(B);
	//MST(B, 0);

	return 0;
}


int find_min(int a[], bool b[])
{
	int result;
	int min = 9999999;
	for (int i = 0; i < 10; i++) {
		if (a[i] < min&&b[i] == false) {
			min = a[i];
			result = i;
		}
	}
	return result;
}

void MST(int G[10][10], int v) 
{
	cout << "The MST is:"<<endl;
	int key[10];
	int prev[10];
	bool visited[10];
	for (int i = 0; i < 10; i++) {
		visited[i] = false;
		key[i] = 999999;
		prev[i] = v;
	}

	for (int j = 0; j < 10; j++) {
		key[j] = G[v][j];
	}

	key[v] = 0;
	visited[v] = true;
	prev[v] = 0;

    for(int i=0;i<9;i++){
		int j = find_min(key, visited);
		visited[j] = true;

		for (int k = 0; k < 10; k++) {
			if (G[j][k] < key[k] && visited[k] == false) {
				key[k] = G[j][k];
				prev[k] = j;
			}
		}
		cout << "v" << prev[j] << "--" << "v" << j << "=" << G[prev[j]][j] << " ";
	}
	cout << endl;
}

void Display(int G[][10])
{
	cout << "The original graph is:" << endl;
	int t = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (G[i][j] < 999999) {
				cout << "v" << i << "~" << "v" << j << "=" << G[i][j] << " ";
				t++;
				if (t == 10 || t == 20 || t == 30) {
					cout << endl;
				}
			}
		}
	}
	cout << endl;
}