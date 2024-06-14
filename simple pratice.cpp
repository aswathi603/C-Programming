#include <stdio.h>
//void m(int*p,int*q){
	//p=q;
	//*p=8;
//	*q=7;
//}
int function(int n) {
	if(n == 0) {
	return 0;
	}
	else {
	return n + function(n - 1);
	}
	}
int main()
{
	//int a=6,b=5;
	//m(&a,&b);
	//printf("%d %d",a,b);	
	//char str[20] = "Hello";
	//str[4] = '\0';
	//printf("%s", str);
	printf("%d\n", function(5));
	return 0;
}


