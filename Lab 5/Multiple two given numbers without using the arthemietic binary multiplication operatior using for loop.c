#include <stdio.h> 
 
int main() 
{ 
    int x,y,i,  z = 0 ; 
    printf("Enter first number: "); 
    scanf("%d",&x); 
    printf("Enter Second number: "); 
	scanf("%d",&y);
	
    for(i=0;i<x;i++) 
    { 
        z = z + y ; 
    } 
    printf("The product is %d", z);
	return 0; 
} 
