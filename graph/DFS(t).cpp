#include<bits/stdc++.h>

using namespace std;
int adj[100][100];
int status[100];
int nodes, edges;

void dfs(int source) {
    stack <int> s;
    s.push(source);

    while(!s.empty()) {
        int x = s.top();
        s.pop();

        for (int i = 1; i <= nodes; i++ ) {
            if(adj[x][i] == 1 && status[i] == 0) {
                s.push(i);
                status[i] = 1;
            }
        }

        status[x] = 2;
        if(status[x] == 2) {
            cout << x << " ";
        }


    }
    cout << endl;
}

int main() {

    cin >> nodes >> edges;
    int firstNode, secondNode;
    for (int i = 1; i <= edges; i++ ) {
        cin >> firstNode >> secondNode;
        adj[firstNode][secondNode] = 1;
    }

    for (int i = 1; i <= nodes; i++) {
        for(int j = 1; j <= nodes; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    dfs(1);

}

