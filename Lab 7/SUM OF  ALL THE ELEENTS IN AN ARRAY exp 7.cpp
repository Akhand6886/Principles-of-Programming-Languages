#include<stdio.h>
int  i ,j ,sum=0;
int main ()
{

int array[10];
	printf("Enter 10 elemtnts in the array");
	
	for(i=0;i < 10 ; i++)
{
	scanf("%d", &array[i]);    
}
for(j=0 ; j < 10 ; j++)
 {
 
 	sum = sum + array[j] ;

}
printf("sum of the array  = %d",sum);
 return 0;
}
