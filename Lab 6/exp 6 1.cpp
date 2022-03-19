# include<stdio.h>
void armstrong(int x)
{
    int r,sum=0,temp;
    temp=x;
    while(x>0)
    {
        r=x%10;
        sum+= r*r*r;
        x=x/10;
    }
    if(temp==sum)
    printf("The number is armstrong \n");
    else 
    printf("The number is not armstrong \n");
    
}


void coprime(int x)
{
    int rev=0,r,temp=x,hcf;
    while(temp!=0)
    {
       r=temp%10;
       rev=rev*10+r;
       temp=temp/10;
      
    }
    printf("The reversed number is %d \n",rev);
    for(int i=1;i<=x;i++) //hcf
    {
        if((x%i==0)&&(rev%i==0))
        {
            hcf=i;
        }
    }
    if(hcf==1)
    printf("The numbers are coprime \n");
    else 
    printf("The numbers are not coprime \n");
}
 void factorial(int x)
   {
     int fact = 1, i;
     for(i=1;i<=x;i++)
     {
         fact = fact * i;
     }
     printf("Factorial of number is %d \n",fact);
   }
int main()
{   
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    armstrong(n);
    coprime(n);
    factorial(n);
    return 0;
}

