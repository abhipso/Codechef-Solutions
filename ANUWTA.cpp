#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		printf("%lld\n",(n*(n+(ll)1)/(ll)2)+n );
	}
	return 0;
}