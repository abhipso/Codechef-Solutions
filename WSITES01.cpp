#include <bits/stdc++.h>
using namespace std;
 
typedef struct trieNode
{
	struct trieNode* children[26];
	bool isLeaf;
}trieNode;
 
trieNode *getNode()
{
	trieNode* pNode = NULL;
	pNode = (trieNode*)malloc(sizeof(trieNode));
	pNode->isLeaf = false;
	for (int i = 0; i < 26; ++i)
	{
		pNode->children[i] = NULL;
	}
	return pNode;
}
 
 void insert(trieNode* root, string s)
 {
 	trieNode *current = root;
 	for (int i = 0; i < s.length(); ++i)
 	{
 		if ((current -> children[s[i] - 'a']) == NULL)
 		{
 			(current -> children[s[i] - 'a']) = getNode();
 		}
 		current = current->children[s[i] - 'a'];
 	}
 	current->isLeaf = true;
 }
 
string lcp(trieNode* root, string s)
{
	string ans = "";
	trieNode *current = root;
	for (int i = 0; i < s.length(); ++i)
	{
		if (current -> children[s[i]-'a'] == NULL)
		{
			break;
		}
		current = current-> children[s[i] - 'a'];
		ans+=s[i];
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	std::set<string> blockded;
	std::set<string> open;
	char sitetype;
	string siteName;
	for (int i = 0; i < n; ++i)
	{
		cin>>sitetype;
		cin>>siteName;
		if (sitetype == '+')
		{
			open.insert(siteName);
		}
		else
			blockded.insert(siteName);
	}
 
	trieNode *root = getNode();
 
	for (auto it = open.begin(); it != open.end(); ++it)
	{
		insert(root, *it);
	}
 	
	bool possible = true;
	set<string> filter;
 
	for (auto it = blockded.begin(); it!= blockded.end(); ++it)
	{
		string common = lcp(root, *it);
		if (common.length() == (*it).length())
		{
			possible = false;
			break;
		}
		filter.insert(common+(*it)[common.length()]);
	}
	if (!possible)
	{
		printf("-1\n");
		return 0;
	}
 
	printf("%d\n", filter.size());
	for (auto it = filter.begin(); it != filter.end(); ++it)
	{
		printf("%s\n", (*it).c_str());
	}
	return 0;
}