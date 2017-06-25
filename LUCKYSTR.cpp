#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,n;
	cin>>k>>n;
	string a[k];
	for (int i = 0; i < k; ++i)
	{
		cin>>a[i];
	}
	for (int iii = 0; iii < n; ++iii)
	{
 
		string s;
		cin>>s;
		bool good=false;
		if (s.length()>=47)
		{
			good=true;
		}
		for (int i = 0; i < k; ++i)
		{
			if (s.find(a[i])!=string::npos)
			{
				good=true;
				break;
			}
		}
		if (good)
		{
			printf("Good\n");
		}
		else
			printf("Bad\n");
	}
	return 0;
}