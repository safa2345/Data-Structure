#include<stdio.h>
int main()
{
    int a[20],b,i,j,searched_value;
    printf("enter numbers:\n");

    for(i=1; i<=5; i++)
    {

        scanf("%d",&a[i]);


    }

    for(i=0; i<=5; i++)
    {
        for(j=i+1; j<=5; j++)
        {
            if(a[i]>a[j])
            {

                b=a[i];
                a[i]=a[j];
                a[j]=b;

            }

        }
    }
    for(i=0; i<5; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nwhich value you want to search:");
    scanf("%d",&searched_value);
    int res=bin(a,4,searched_value);
    if(res==-1)
    {
        printf("value not found");
    }

}
int bin(int a[],int n,int searched_value)
{



    int l=0,h=n,mid;


    while(l<=h)
    {
        mid=(l+h)/2;
        if(searched_value==a[mid])
        {
            printf("value found at %d index",mid);
            return mid;
        }
        else if(searched_value>a[mid])
        {
            l=mid+1;
        }
        else if(searched_value<a[mid])
        {
            h=mid-1;
        }

    }


    return -1;

}
