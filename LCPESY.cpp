#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int a[26],b[26],A[26],B[26];
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(A,0,sizeof(A));
		memset(B,0,sizeof(B));
		int dig1[10];
		int dig2[10];
		memset(dig1,0,sizeof(dig1));
		memset(dig2,0,sizeof(dig2));
		for (int i = 0; i < s1.length(); ++i)
		{
			if (s1[i]>='a'&&s1[i]<='z')
			{
				a[s1[i]-'a']++;
			}
			if (s1[i]>='A'&&s1[i]<='Z')
			{
				A[s1[i]-'A']++;
			}
			if (s1[i]>='0'&&s1[i]<='9')
			{
				dig1[s1[i]-'0']++;
			}
		}
		for (int i = 0; i < s2.length(); ++i)
		{
			if (s2[i]>='a'&&s2[i]<='z')
			{
				b[s2[i]-'a']++;
			}
			if (s2[i]>='A'&&s2[i]<='Z')
			{
				B[s2[i]-'A']++;
			}
			if (s2[i]>='0'&&s2[i]<='9')
			{
				dig2[s2[i]-'0']++;
			}
		}
 
 
		int ans=0;
		for (int i = 0; i < 26; ++i)
		{
			ans+=(min(a[i],b[i]));
		}
		for (int i = 0; i < 26; ++i)
		{
			ans+=(min(A[i],B[i]));
		}
		for (int i = 0; i < 10; ++i)
		{
			ans+=(min(dig2[i],dig1[i]));
		}
		printf("%d\n",ans );
	}
	return 0;
}