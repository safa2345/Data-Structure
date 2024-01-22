#include<bits/stdc++.h>
#define INF INT_MAX
using namespace std;

int nodes, edges;
vector <int> node_vector[100];
vector <int> cost_vector[100];
int parent[100];

int find_parent(int i) {
    while (parent[i] != i) {
        i = parent[i];
    }
    return i;
}

void remove(int a, int b) {
    int x = find_parent(a);
    int y = find_parent(b);
    parent[x] = y;
}

void kruskals() {  
    for (int i = 0; i < nodes; i++) 
        parent[i] = i;

    int total_cost = 0;    
    int edge_count = 0;

    while (edge_count < nodes - 1) {
        int min = INF, a, b;
        for(int u = 0; u < nodes - 1; u++) 
            for(int i = 0; i < node_vector[u].size(); i++) {
                int v = node_vector[u][i];
                int w = cost_vector[u][i];
                if(find_parent(u) != find_parent(v) && w < min) {
                    min = w;
                    a = u;
                    b = v;    
                }
            }
        remove(a, b);
        cout << a << " - " << b << " = " << min << endl;
        total_cost += min;
        edge_count ++;
    }

    cout << total_cost << endl;           
}

int main() {
    cin >> nodes >> edges;
    for(int i = 0; i < edges; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        node_vector[u].push_back(v);
        cost_vector[u].push_back(w);
    }
    kruskals();

    return 0;
}