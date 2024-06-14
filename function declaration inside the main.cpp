#include <stdio.h>
int main()
{
	int sum(int,int);
	int a=10,b=43;
	int c=sum(a,b);
	printf("Sum is equal to:%d",c);
	
}
int sum (int x, int y)
{
	return(x+y);
}
