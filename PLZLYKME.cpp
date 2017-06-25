#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll l,d,s,c;
		cin>>l>>d>>s>>c;
		ll likes=s;
		bool alive=false;
		for (int i = 0; i < d-1; ++i)
		{
			likes*=((ll)1+c);
			if (likes>=l)
			{
				alive=true;
				break;
			}
		}
		if (likes>=l)
		{
			alive=true;
		}
		if (alive)
		{
			printf("ALIVE AND KICKING\n");
		}
		else
			printf("DEAD AND ROTTING\n");
	}
	return 0;
}