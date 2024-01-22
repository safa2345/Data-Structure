#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

vector<int> a[100];
vector<int> ans;
int b[100];

void topo(int n)
{

    queue<int> r;
    for(int i=0; i<n; i++)
    {
        if(b[i]==0)
            r.push(i);
    }

    while(!r.empty())
    {

        int current=r.front();//0,2
        ans.push_back(current);//ans=0,2

        r.pop();

     /*  for(int node:a[current])
        {
            b[node]--;
            if(b[node]==0)
                r.push(node);

        }*/
    for(int i=0;i<a[current].size();i++){
        b[a[current][i]]--;
        if(b[a[current][i]]==0)
            r.push(b[a[current][i]]);

    }


    }
    printf("Toplogical sort\t");
    for(int i:ans)
        cout<<i<<" ";
}
int main()
{


    int nodes,edges,x,y;
    printf("Enter the no of nodes and edges:");
    scanf("%d%d",&nodes,&edges);

    for(int i=1; i<=edges; i++)
    {

        scanf("%d%d",&x,&y);
        a[x].push_back(y);
        b[y]++;
    }

    topo(nodes);


}


