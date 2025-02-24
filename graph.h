#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <cstdio>
using namespace std;

class Graph {
private:
    int numNodes;
    vector<vector<int>> adjacencyMatrix;
public:
    Graph(int n) : numNodes(n), adjacencyMatrix(n, vector<int>(n, 0)) { }

    void addEdge(int i, int j) {
        adjacencyMatrix[i][j] = 1;
        adjacencyMatrix[j][i] = 1;
    }

    int getDegree(int node) const {
        int degree = 0;
        for (int i = 0; i < numNodes; ++i)
            degree += adjacencyMatrix[node][i];
        return degree;
    }

    int getMaxDegreeNode() const {
        int maxDegree = getDegree(0);
        int maxDegreeNode = 0;
        for (int i = 1; i < numNodes; ++i) {
            int degree = getDegree(i);
            if (degree > maxDegree) {
                maxDegree = degree;
                maxDegreeNode = i;
            }
        }
        return maxDegreeNode;
    }

    int getMinDegreeNode() const {
        int minDegree = getDegree(0);
        int minDegreeNode = 0;
        for (int i = 1; i < numNodes; ++i) {
            int degree = getDegree(i);
            if (degree < minDegree) {
                minDegree = degree;
                minDegreeNode = i;
            }
        }
        return minDegreeNode;
    }

    void displayMatrix() const {
        for (int i = 0; i < numNodes; ++i) {
            for (int j = 0; j < numNodes; ++j)
                printf("%d ", adjacencyMatrix[i][j]);
            printf("\n");
        }
    }

    vector<int> getNeighbors(int node) const {
        vector<int> neighbors;
        for (int i = 0; i < numNodes; ++i) {
            if (adjacencyMatrix[node][i] == 1)
                neighbors.push_back(i);
        }
        return neighbors;
    }

    int getNumNodes() const { return numNodes; }
    const vector<vector<int>>& getMatrix() const { return adjacencyMatrix; }
};

#endif // GRAPH_H
