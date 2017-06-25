#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	int n,m;
	cin>>n>>m;
	int splf[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>splf[i];
	}
	int f1[m],p1[m];
	int f2[m],p2[m];
	string s1[m];
	string s2[m];
	int it1=0;
	int it2=0;
	for (int i = 0; i < m; ++i)
	{
		int tmp;
		cin>>tmp;
		if (find(splf,splf+n,tmp)!=(splf+n))
		{
			f1[it1]=tmp;
			cin>>p1[it1];
			cin>>s1[it1];
			it1++;
		}
		else
		{
			f2[it2]=tmp;
			cin>>p2[it2];
			cin>>s2[it2];
			it2++;
		}
	}
	//sfc=0;
	int d;
	for (int i = 0; i < it1; ++i)
	{
		d=distance(p1, max_element(p1, p1 + it1));
		cout<<s1[d]<<"\n";
		p1[d]=0;
	}
	for (int i = 0; i < it2; ++i)
	{
		d=distance(p2, max_element(p2, p2 + it2));
		cout<<s2[d]<<"\n";
		p2[d]=0;
	}
 
	return 0;
}
 