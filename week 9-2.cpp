//week 9-2
#include <stdio.h>
struct cricket
{
	int player_id;
	int player_runs;
};
main()
{
	int i,n,sum=0;
	printf("Enter the number of player:");
	scanf("%d",&n);
	struct cricket a[11];
	for (i=1;i<=n;i++)
	{
		scanf("%d %d",&a[i].player_id,&a[i].player_runs);
		sum=sum+a[i].player_runs;
	}
	printf("Total runs made by team:%d",sum);
}
