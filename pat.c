/*
enter the limit
5
            1              
         2  3  2           
      3  4  5  4  3        
   4  5  6  7  6  5  4     
5  6  7  8  9  8  7  6  5  

*/

#include<stdio.h>
int main()
{
  int n,i,j,t=1,k,l,m,c=0;
  printf("\nenter the limit\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=(n*2)-1;j++)
    {
     if(j<=n)
    {
      if (j<=n-i)
        printf("   ");
       else
        {
            printf("%d  ",t);
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
         printf("   ");
     }
  }
     printf("\n"); 
  }

  printf("\n");
  return 0;
}
