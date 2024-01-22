#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
int status[100];
int nodes, edges;

void bfs(int source) {
    queue <int> q;
    q.push(source);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        for (int i = 1; i <= nodes; i++ ) {
            if(adj[x][i] == 1 && status[i] == 0) {
                q.push(i);
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

    }

    bfs(1);

}
