#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s;
	cin>>s;
	while(t--)
	{
		string msg;
		cin>>msg;
		for (int i = 0; i < msg.length(); ++i)
		{
			if (msg[i]>='a'&&msg[i]<='z')
			{
				printf("%c", s[msg[i]-'a']);
			}
			else if (msg[i]>='A'&&msg[i]<='Z')
			{
				printf("%c",-'a'+'A'+s[msg[i]-'A'] );
			}
			else if (msg[i]=='_')
			{
				printf(" ");
			}
			else
				printf("%c", msg[i]);
		}
		printf("\n");
	}
	return 0;
}