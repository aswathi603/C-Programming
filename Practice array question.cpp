#include <stdio.h>
int main()
{
	int a[4]={1,45,3,4};
	int i,pass,hold;
	for(pass=0;pass<4-1;pass++)
	{
		for (i=0;i<4-pass-1;i++)
		{
			if (a[i]>a[i+1])
			{
				hold=a[i];
				a[i]=a[i+1];
				a[i+1]=hold;
			}
		}
	}
	printf("%d",a[i]);
	int count=1;
	for (i=0;i<4;i++)
	{
		if (a[i]==a[i+1])
		{
			count=count+1;
		}
	}
	printf("%d",count);
}
