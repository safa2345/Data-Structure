#include<stdio.h>
int main()
{
    int a[200],i,j,k,temp;
    printf("enter number:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("%d\t",a[i]);
    }

   for(i=1;i<5;i++)
   {
      temp=a[i];
      j=i-1;
      while(j>=0 && a[j]>temp)
    // for(j=i-1;j>=0;j--)
     {
         //if(a[j]>temp)
        // {
            a[j+1]=a[j];
            j--;
          //  a[j]=temp;
           // temp=k;
         //}


     }

     a[j+1]=temp;

   }
printf("\nafter sorting\n");
 for(i=0; i<5; i++)
    {
        printf("%d\t",a[i]);
    }



    return 0;




}
