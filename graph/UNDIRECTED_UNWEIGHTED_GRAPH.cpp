#include<stdio.h>
#include<iostream>
using namespace std;
int adj[50][50];
int main()
{
    int n,e,n1,n2;
    printf("enter node no:");
    scanf("%d",&n);
    printf("enter edge no:");
    scanf("%d",&e);

    for(int i=1;i<=e;i++){

        scanf("%d %d",&n1,&n2);
        adj[n1][n2]=1;
        adj[n2][n1]=1;


    }
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
    {

       printf("%d\t",adj[i][j]);
    }

   printf("\n");

}

return 0;

}


