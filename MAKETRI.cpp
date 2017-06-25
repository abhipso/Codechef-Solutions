#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main()
{
	std::map<ll, ll> stmap;
	unordered_set<ll> memo;
	ll n,l,r;
	cin>>n>>l>>r;
	ll a[n];
	for (ll i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
 
	for (ll i = 0; i < n-1; ++i)
	{
		ll j=i+1;
		ll lb=max(l,(1+a[j]-a[i]));
		ll ub=min(r,(a[j]+a[i]-1));
		if (lb<=ub)
		{
			if (memo.find(lb)==memo.end())
			{
				stmap.insert(make_pair(lb,ub));
				memo.insert(lb);
			}
			else
				stmap[lb]=max(ub,stmap[lb]);
		}
	}
	ll ub,lb;
	std::map<ll, ll> newmap;
	bool bb=false;
	int test_itr=0;
	for(auto it=stmap.begin();it!=stmap.end();++it)
	{
		if (!bb)
		{
			lb=it->first;
			ub=it->second;
			bb=true;
		}
		else
		{
			if ((it->first)<=ub)
			{
				ub=max(ub,it->second);
			}
			else
			{
				newmap.insert(make_pair(lb,ub));
				bb=false;
				--it;
			}
		}
		test_itr++;
	}
	ll ans=0;
	newmap.insert(make_pair(lb,ub));
	for(auto it=newmap.begin();it!=newmap.end();++it)
	{
		ans+=((it->second)-(it->first)+1);
	}
	printf("%lld\n",ans);
	return 0;
}