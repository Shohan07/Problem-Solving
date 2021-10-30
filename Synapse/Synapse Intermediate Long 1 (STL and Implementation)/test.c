

#include<stdio.h>

#include<string.h>
using namespace std;
int a[10010];
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		int j=0;
		while(a[j]<0&&j<n)
		{
			j++;

		}
		//printf("**%d**\n",j);
		int sum=0;
		if(j>=k)
		{
			for(int i=0;i<n;i++)
			{
				if(i<k) sum-=a[i];//把k写成了j,没长脑子吧。。。。
				else sum+=a[i] ;
			}
		}
		else
		{
			for(int i=0;i<j;i++)
			{
				a[i]=-a[i];
			}
			int w=k-j;
			sort(a,a+n);
			for(int i=1;i<n;i++) sum+=a[i];
			if(w%2==0) sum+=a[0];
			else
			{
				sum-=a[0];
			}
		}
		printf("%d\n",sum);
	}
	return 0;
 }
