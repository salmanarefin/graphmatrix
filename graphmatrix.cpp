#include<iostream>
#include<iomanip>

using namespace std;

// A function to print the adjacency matrix.
void PrintMat(int mat[][20], int n)
{
	int i, j;

	cout<<"\n\n"<<setw(4)<<"";
	for(i = 0; i < n; i++)
		cout<<setw(3)<<"("<<i+1<<")";
	cout<<"\n\n";

	// Print 1 if the corresponding vertexes are connected otherwise 0.
	for(i = 0; i < n; i++)
	{
		cout<<setw(3)<<"("<<i+1<<")";
		for(j = 0; j < n; j++)
		{
			cout<<setw(4)<<mat[i][j];
		}
		cout<<"\n\n";
	}
}

int main()
{
	int i, j, v;

	cout<<"Enter the number of vertexes: ";
	cin>>v;

	int  mat[20][20];

	cout<<"\n";
	// Take input of the adjacency of each pair of vertexes.
	for(i = 0; i < v; i++)
	{
		for(j = i; j < v; j++)
		{
			if(i != j)
			{
				cout<<"Enter 1 if the vertex "<<i+1<<" is adjacent to "<<j+1<<", otherwise 0: ";
				cin>>mat[i][j];

				mat[j][i] = mat[i][j];
			}
			else
				mat[i][j] = 0;
		}
	}

	PrintMat(mat, v);
}


#include <iostream>
using namespace std;

int main()
{
	// n is the number of vertices
	// m is the number of edges
	int n, m;
	cin >> n >> m;
	int adjMat[n + 1][n + 1];
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adjMat[u][v] = 1;
		adjMat[v][u] = 1;
	}

	return 0;
}

