using namespace std;
#include <iostream>
#include <queue>

void DFS(int v, int A[][15]);
void BFS(int v, int A[][15]);

int main()
{
	int A[10][15] =
	{   0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,
		1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
		0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,1,1,1,0,0,1,0,1,
		0,0,0,0,0,0,1,0,1,0,0,1,0,1,0,
		0,0,0,0,1,1,0,0,0,0,0,1,0,0,0,
		0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,
		0,0,0,0,0,0,0,1,0,0,1,0,0,0,0
	};

	int B[10][15] =
	{   0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,
		1,0,1,1,0,0,0,0,0,0,0,1,0,0,0,
		0,1,0,1,1,0,0,0,0,0,0,0,1,0,0,
		0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,1,1,1,0,0,0,0,1,
		0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,
		0,0,0,0,1,1,0,0,0,0,0,1,0,0,0,
		0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,
		0,0,0,0,0,0,0,1,0,0,1,0,0,0,0
	};

	int C[10][15] =
	{   1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	   -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0,-1, 0, 1,-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0,-1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1,
		0, 0,-1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,-1, 1, 1, 0, 0, 1, 0,-1,
		0, 0, 0, 0, 0, 0,-1, 0,-1, 0, 0, 1, 0, 1, 0,
		0, 0, 0, 0, 1,-1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0,-1, 1, 0, 0,-1, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1,-1,-1, 0, 0
	};

	cout <<"undirected connected graph ";
	DFS(4, A);
	cout << "undirected disconnected graph ";
	DFS(5, B);
	cout << "directed graph ";
	DFS(1, C);

	cout << endl;

	cout << "undirected connected graph ";
	BFS(4, A);
	cout << "undirected disconnected graph ";
	BFS(5, B);
	cout << "directed graph ";
	BFS(1, C);

	return 0;
}

void DFSv(int i, bool visited[], int A[][15]) 
{
	visited[i] = true;
	cout << "v" << i << " ";

	for (int j = 0; j < 15; j++) {
		if (A[i][j] == 1) {
			for (int k = 0; k < 10; k++) {
				if (k != i && A[k][j] != 0 && visited[k] == false) 
				{
					DFSv(k, visited, A);
				}
			}
		}
	}
}

void DFS(int v, int A[][15])
{
	bool visited[10];
	for (int i = 0; i < 10; i++) {
		visited[i] = false;
	}
	
	cout << "DFS: ";
	DFSv(v, visited, A);
	
	for (int j = 0; j < 10; j++) {
		if (visited[j] == false) {
			DFSv(j, visited, A);
		}
	}
	cout << endl;
}

void BFSv(int i, bool visited[10], int A[][15],queue<int>vertex) 
{
	if (visited[i] == false) {
		vertex.push(i);
	}

	for (int j = 0; j < 15; j++) {
		if (A[i][j] == 1) {
			for (int k = 0; k < 10; k++) {
				if (k != i && A[k][j] != 0 && visited[k] == false)
				{
					visited[k]=true;
					vertex.push(k);
				}
			}
		}
	}

	cout << "v" << vertex.front() << " ";
	visited[vertex.front()] = true;
	vertex.pop();
	if (!vertex.empty()) {
		BFSv(vertex.front(), visited, A, vertex);
	}
}

void BFS(int v, int A[][15]) 
{
	int i = 0;
	bool visited[10];	
	for (i = 0; i < 10; i++) {
		visited[i] = false;
	}

	queue<int>que;
	cout << "BFS: ";
	BFSv(v, visited, A, que);
	
	for (int j = 0; j < 10; j++) {
		if (visited[j] == false) {
		BFSv(j, visited, A,que);
		}
	}
	cout << endl;
}

/*
vector<int> Neighbor(int i, int A[][15])
{
vector<int>neighbor = {};

for (int j = 0; j < 15; j++) {
if (A[i][j] == 1) {
for (int k = 0; k < 10; k++) {
if (k != i && A[k][j] != 0)
{
neighbor.push_back(k);
}
}
}
}

return neighbor;
}
*/

