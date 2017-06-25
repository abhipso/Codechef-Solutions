#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int a = 46870;
	int b = 33102;
	int limit = 1000004;
	string s = "";
	while(limit--)
	{
		if (a/b == 0)
		{
			s+='0';
		}
		else
		{
			char c = ((a/b) + '0');
			a%=b;
			s+=c;
		}
		a*=10;
	}
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		if (k == 0)
		{
			printf("3\n");
			continue;
		}
		printf("3.");
		for (int i = 0; i < k; ++i)
		{
			printf("%c", s[i]);
		}
		printf("\n");
	}
	return 0;
}