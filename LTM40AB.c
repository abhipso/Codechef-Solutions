#include <stdio.h>
 
int max(int a, int b)
{
	if (a>b)
	{
		return a;
	}
	else return b;
}
 
int min(int a, int b){
	if (a<b)
	{
		return a;
	}
	else return b;
}
 
int main()
{
	int t,a,b,c,d,rub,i;
	scanf("%d",&t);
	long long n;
	while(t--)
	{
		
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		scanf("%d",&d);
		n=0;
		rub=max(c,d);
		for ( i=a;i<=b;i++)
		{
		
			if(i<=d)
			{
				n=n+(d-max(c,i+1))+1;
			}
			
		}
			
		printf("%lld\n",n );
	}
	return 0;
}