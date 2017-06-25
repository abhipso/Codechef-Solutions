#include <bits/stdc++.h>
using namespace std;
 
bool checkIfTriangle(int a,int b,int c)
{
	if ((a+b>=c)&&(b+c>=a)&&(c+a>=b))
	{
		return true;
	}
	return false;
}
 
int count(int target,int*a,int n,int j)
{
	int high=n-1,low=j+1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if (((a[mid-1]<=target)&&(a[mid]>target)))
		{
			return n-mid;
		}
		else if (a[mid]<=target)
		{
			low=mid+1;
		}
		else if (a[mid]>target)
		{
			high=mid-1;
		}
	}
	return 0;
}
 
int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if (n==0)
		{
			break;
		}
		int a[n+1];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		a[n+1]=INT_MAX;
		int ans=0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				ans+=count(a[i]+a[j],a,n,j  );	
			}
		}
		printf("%d\n",ans);
	}

	return 0;
}