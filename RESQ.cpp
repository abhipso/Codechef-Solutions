#include <stdio.h>
#include <math.h>
 
int abs(int n)
{
	return n>0?n:(-1)*n;
}
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int kk=sqrt(n);	
		int i;
		for (i = kk; i >= 1; --i)
		{
			if (n%i==0)
			{
				printf("%d\n",abs(i-(n/i)) );
				break;
			}
		}
	}
	return 0;
}