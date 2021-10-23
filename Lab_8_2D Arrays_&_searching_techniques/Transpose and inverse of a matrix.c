#include <stdio.h>

2 int main()

3- {

4 int a, b, c, d, mat[10][10], trans [10][10]; 5 printf("Enter the number of rows and columns of matrix: "); scanf("%d%d",&a,&b); printf("Enter the elements of matrix \n"); 8 for(c=0; c<a; c++ )

9-

{

for(d = 0; d < b ; d++ ) scanf("%d",&mat[c][d]);

{

}

}

for( c = 0; c <a; c++ ) 
{
for( d = 0; d < b ; d++ ) 
{
trans [d] [c]= mat[c] [d];
}
}

} printf(" The traspose of entered matrix is:-\n");

for(c=0; c < b ; c++ ) 
	for( d = 0; d <a; d++ ) 
	{ printf("%d\t", trans [c][d]); 
	  printf("\n");
}

} return 0;


