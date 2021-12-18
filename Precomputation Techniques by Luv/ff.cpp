// A C++ program for Dijkstra's single source shortest path algorithm.
// The program is for adjacency matrix representation of the graph
#include <iostream>
using namespace std;
#include <limits.h>

// Number of vertices in the graph
#define V 9

// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int mindist(int distanc[], bool sptst[])
{

	// Initialize min value
	int min = INT_MAX, min_index;

	for (int v = 0; v < V; v++)
		if (sptst[v] == false && distanc[v] <= min)
			min = distanc[v], min_index = v;

	return min_index;
}

// A utility function to print the constructed distance array
void printSol(int distanc[])
{
	cout <<"Vertex \t Distance from Source" << endl;
	for (int i = 0; i < V; i++)
		cout << i << " \t\t"<<distanc[i]<< endl;
}

// Function that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
void dijkstra(int graph[V][V], int src)
{
	int distanc[V]; // The output array. distanc[i] will hold the shortest
	// distance from src to i

	bool sptst[V]; // sptst[i] will be true if vertex i is included in shortest
	// path tree or shortest distance from src to i is finalized

	// Initialize all distances as INFINITE and stpSet[] as false
	for (int i = 0; i < V; i++)
		distanc[i] = INT_MAX, sptst[i] = false;

	// Distance of source vertex from itself is always 0
	distanc[src] = 0;

	// Find shortest path for all vertices
	for (int count = 0; count < V - 1; count++) {
		// Pick the minimum distance vertex from the set of vertices not
		// yet processed. u is always equal to src in the first iteration.
		int u = mindist(dist, sptst);

		// Mark the picked vertex as processed
		sptst[u] = true;

		// Update dist value of the adjacent vertices of the picked vertex.
		for (int v = 0; v < V; v++)

			// Update distanc[v] only if is not in sptst, there is an edge from
			// u to v, and total weight of path from src to v through u is
			// smaller than current value of distanc[v]
			if (!sptst[v] && graph[u][v] && distanc[u] != INT_MAX
				&& distanc[u] + graph[u][v] < distanc[v])
				distanc[v] = distanc[u] + graph[u][v];
	}

	// print the constructed distance array
	printSol(dist);
}

// driver program to test above function
int main()
{

	/* Let us create the example graph discussed above */
	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
						{ 4, 0, 8, 0, 0, 0, 0, 11, 0 },
						{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
						{ 0, 0, 7, 0, 9, 14, 0, 0, 0 },
						{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
						{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },
						{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
						{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
						{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

	dijkstra(graph, 0);

	return 0;
}

// This code is contributed by shivanisinghss2110
