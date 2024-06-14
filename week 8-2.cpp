#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter how many element you need:");
	scanf("%d",&n);
	int a[n],product=1;			//sum is in the second part
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		product=product*a[i];
	}
	printf("%d",product);

		//if (a[n-1]%10==0)
	//	{
	//		printf("Yes");
	//	}
	//	else
	//	{
	//		printf("No");
	//	}
}
