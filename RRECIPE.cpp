#include <bits/stdc++.h>
using namespace std;
#define toMod 10000009
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int left=0,right=s.length()-1;
		int finalans=1;
		while(left<=right)
		{
			bool possible=true;
			int ans=0;
			if ((left==right)&&(s[left]=='?'))
			{
				ans+=26;
			}
			else if (s[left]=='?'&&s[right]=='?')
			{
				ans+=26;
			}
			else if (s[left]=='?'||s[right]=='?')
			{
				ans++;
			}
			else if (((left==right)&&(s[left]!='?')))
			{
				ans=1;
			}
			else
				ans=1;
			if ((s[left]!='?'&&s[right]!='?')&&(s[left]!=s[right]))
			{
				possible=false;
			}
			if (possible)
			{
				finalans=((finalans%toMod)*(ans%toMod))%toMod;
			}
			else
			{
				finalans=0;
				break;
			}
			left++;
			right--;
		}
		printf("%d\n",finalans%toMod );
	}
	return 0;
}