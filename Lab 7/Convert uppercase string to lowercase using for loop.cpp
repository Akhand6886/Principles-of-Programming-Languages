#include<stdio.h>
#include<string.h>

int main()
{
   char str[50] ;
   printf("Enter any string: ");
   scanf("%s",str);
    
	for( int i = 0; str[i]!='\0'; i++ )
    {
    	  if(str[i]>='A'  && str[i]<='Z')
    	  {
    	  	str[i] = str[i] + 32;
	  }
	}
	printf("Lowercase string:  %s ", str);
	return 0; 
}
