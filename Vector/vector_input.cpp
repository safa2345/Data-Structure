#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;
 vector <int>graph[100];
int main()
{

    int n,e,u,v;
	cout << "Enter number of vertex : ";
	cin >> n;
	cout << "Enter number of edge : ";
	cin >> e;
	for(int i=0;i<=e;i++){
	cin>>u>>v;
	graph[u].push_back(v);
    graph[v].push_back(u);

	}



}
