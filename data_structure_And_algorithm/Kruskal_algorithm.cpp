#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Edge 
{
        int src, dest, weight;
};

// a structure to represent a connected, undirected and weighted graph
struct Graph
{
        // V -> # of vertices , E -> # of edges
        int V, E;

        // graph is represented as an array of edges.
        // the graph is undirected, the edge from src to dest is also
        // edge from dest to src. Both are counted as 1 edge here
        struct Edge* edge;
};

// Creates a graph with V vectices and E edges 
struct Graph* createGraph(int V, int E)
{
        struct Graph* graph = (struct Graph *) malloc( sizeof(struct Graph));
        graph->V = V;
        graph->E = E;

        graph->edge = (struct Edge *) malloc (graph->E * sizeof(struct Edge));
        return graph;
}

struct subset
{
        int parent;
        int rank;
};

// A utility function to find set of an element i
// (uses path compression technique)
int find(struct subset subsets[], int i)
{
        // find root and make root as parent of i (path compression)
        if (subsets[i].parent != i)
                subsets[i].parent = find(subsets, subset[i].parent);

        return subsets[i].parent;
}

void Union (struct subset subsets[], int x, int y)
{
        int xroot = find(
