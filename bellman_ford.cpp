#include<bits/stdc++.h>
using namespace std;
int adj[100][100],node,edge;
bool visited[100]={false};
int path[100];
void bellmanFord(int startingNode)
{
   queue<int> q;
    q.push(startingNode);

    while(!q.empty())
    {
        int x;
        x = q.front();
        q.pop();
        visited[x] = true;
        for(int i = 1; i <= node; i++)
        {
            if(adj[x][i] < 1000 && adj[x][i] != 0)
            {

                    if( path[x]+adj[x][i] < path[i] )
                       path[i] = path[x]+adj[x][i];


                       if(!visited[i])
                           q.push(i);

        }

    }

 }
}



int main()
{
    printf("Enter node no :");
    scanf("%d",&node);
    printf("Enter edge no :");
    scanf("%d",&edge);

    int n1,n2,cost1;

    for(int i = 1; i <= node; i++)
    {
        for(int j = 1; j <= node; j++) {
            adj[i][j] = INT_MAX;
        }
    }

    for(int i = 0; i < edge; ++i) {
        scanf("%d %d %d",&n1,&n2,&cost1);
        adj[n1][n2] = cost1;
    }


    path[1] = 0;
    for(int i = 2; i <= node; i++)
        path[i]=INT_MAX;

        for(int i = 1; i <= node; i++)
        {
            for(int i = 1; i <= node; i++)
                 visited[i]=false;

            bellmanFord(1);
            for(int j = 1; j <= node; j++)
                 cout << path[j] << " ";

        printf("\n");


        }

    for(int i = 1; i <= node; i++){
        cout << path[i] << " ";
}
}

