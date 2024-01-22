#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX

typedef pair<int, int> pii;

class Graph
{
    int V;

    list<pair<int, int>> *adj;

public:
    Graph(int V);

    void addEdge(int u, int v, int w);

    int shortestPath(int s, int friendsHouse);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<pii>[V];
}

void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}

// dijkstra
int Graph::shortestPath(int src, int friendsHouse)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    vector<int> dist(V, INF);

    pq.push(make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        list<pair<int, int>>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            int v = (*i).first;
            int weight = (*i).second;

            if (dist[v] > dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    return dist[friendsHouse];
}

int main()
{
    int N;
    cin >> N;

    Graph g(N);

    int M;
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        int a, b, cost;
        cin >> a >> b >> cost;
        g.addEdge(a - 1, b - 1, cost);
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int A, K;
        cin >> A >> K;
        int minCost = g.shortestPath(0, A - 1); // as I am using 0 based indexing, house 1 is noted here as house 0.

        if ((K - 2 * minCost) < 0)
            cout << "0" << endl;
        else
            cout << (K - 2 * minCost) << endl;
    }


    return 0;
}


