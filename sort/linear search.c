#include<stdio.h>
int main()
{
    int f[6]= {45,7,9,2,67,90};
    int p=0;
    int s=2,i;
    for(i=0;i<6;i++){
                if(f[i]==2)
        {
            p=1;
            break;
        }


        }
      if(p)
      {
          printf("found");
      }
      else
      {
        printf("not found");
      }
    }


