#include <stdio.h>
  int callarmstrong(int x)
{
    int variable,z,y;
     variable=x;
     y=0;
     
    while(variable>0)
    {
        z=variable%10;
        y=y + (z*z*z);
    variable/=10;
    }  
  if(y==x)  
      return 1;
  else
    return 0;
}
 
int main()
{
    int i,n;
 
    printf("Enter the value of N: ");
    scanf("%d",&n);
 
    printf("All Armstrong numbers from 1 to %d:\n",n);
    for(i=1;i<=n;i++)
    {
        if(callarmstrong(i))
            printf("%d,",i);
    }  
    return 0;
}
