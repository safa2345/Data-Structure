#include<stdio.h>
int main()
{

    int n,A=1,B=2,C=3;
    printf("how many disks");
    scanf("%d",&n);
    toh(n,A,B,C);
    return 0;


}

void toh(int n,int A,int B,int C)
{
    if(n>0)
    {
        toh(n-1,A,C,B);

        printf("move a disc from %d to %d\n",A,C);

        toh(n-1,B,A,C);


    }




}








