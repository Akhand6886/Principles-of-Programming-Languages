#include<stdio.h>
int triangle_area(int base,int height)
{   
    int area;
    area = (base*height)/2;
    printf("Area of the triangle is: %d \n",area);
}
void swap(int *x, int*y)
{
	printf(" values before swaping :: %d %d \n" , *x , *y );
    int a;
    a=*x;
    *x=*y;
    *y=a;
    printf(" values after swaping :: %d %d \n", *x ,*y );
}
float rem(int a,int b)
{
    float r;
    r=a%b;
    printf("Remainder of a/b is :%f",r);
}
int main()
{   int n1,n2;
    printf("Enter 1st number :");
    scanf("%d",&n1);
     printf("Enter 2nd number :");
    scanf("%d",&n2);
    triangle_area(n1,n2); 
    swap(&n1,&n2);
    rem(n1,n2);
    return 0;
}

