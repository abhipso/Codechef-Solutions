#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a=n%25;
		if (a!=0)
		{
			for (char i = a+'a'; i >='a' ; --i)
			{
				printf("%c",i );
			}
		}
		int b=n/25;
		while(b--)
		{
			for (char i = 'z'; i >='a' ; --i)
			{
				printf("%c",i );
			}	
		}
		printf("\n");
	}
	return 0;
}