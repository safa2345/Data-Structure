#include<stdio.h>
#include<iostream>
using namespace std;
int adj[50][50];
int main()
{
    int n,e,n1,n2,weight;
    printf("enter node no:");
    scanf("%d",&n);
    printf("enter edge no:");
    scanf("%d",&e);

    for(int i=0;i<e;i++){

        scanf("%d %d %d",&n1,&n2,&weight);
        adj[n1][n2]=weight;



    }
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    {

       printf("%d\t",adj[i][j]);
    }

   printf("\n");

}

return 0;

}
