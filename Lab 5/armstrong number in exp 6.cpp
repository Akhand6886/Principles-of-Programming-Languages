#include <stdio.h>
  int callarmstrong(int x)
{
    int variable,z,y;
     variable=x;
     y=0;
     
    while(variable>0)
    {
        z= variable%10;
        y= y + (z*z*z);
    variable/=10;
    }  
  if(y==x)  
      return 1;
  else
    return 0;
}
 
int main()
{
    int n;
 
    printf("Enter your number : ");
    scanf("%d",&n);
 
        if(callarmstrong(n))
           printf("%d is  a Armstrong numbers  ",n);
        else 
           printf("%d is not a Armstrong numbers ",n);
    
    return 0;
}
