#include <stdio.h>
int triangle_area(int base,int height)
{   
    int area;
    area = (base*height)/2;
    printf("Area of the triangle is: %d \n",area);
}
void swap(int *x, int*y)
{
    int a;
    a=*x;
    *x=*y;
    *y=*x;
}
int rem(int a,int b)
{
    int r;
    r=a%b;
    printf("Remainder of a/b is :%d",r);
}
int main()
{   int n1,n2;
    printf("Enter 1st number -");
    scanf("%d",&n1);
     printf("Enter 2nd number -");
    scanf("%d",&n2);
    triangle_area(n1,n2); 
    swap(&n1,&n2);
    rem(n1,n2);
    return 0;
}
