#include<stdio.h>
int main()
{
    int num[200],i,j,temp;
    printf("enter number:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("%d\t",num[i]);
    }

   for(i=1;i<5;i++)
   {
      temp=num[i];

     for(j=i-1;j>=0;j--)
     {
         if(num[j]<temp)
         {
            num[j+1]=num[j];

         }
  else
  {
       break;
  }

     }

     num[j+1]=temp;

   }
printf("\nafter sorting\n");

 for(i=0; i<5; i++)
    {
        printf("%d\t",num[i]);
    }

    return 0;

}

