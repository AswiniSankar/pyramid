/*
5
        1         
      1 2 1        
    1 2 3 2  1      
  1 2 3 4 3  2  1    
1 2 3 4 5 4  3  2  1  
*/
#include<stdio.h>
int main()
{
 int n,i,j,t;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   t=1;
   for(j=1;j<=(n*2)-1;j++)
   {
      if(j<=n)
      {
        if (j<=n-i)
        printf("  ");
       else
        {
      
            printf("%d ",t);
            t++; 
         }
      
      }
      else
      {
         
        if(j<=(n+i)-1)
           {
                  printf("%d  ",t-2);
                  t--;
                          
            }
        
        else
         printf("  ");
     }
      }
  printf("\n");

 }
 return 0;
}
