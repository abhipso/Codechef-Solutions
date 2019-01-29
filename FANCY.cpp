#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define print(A,n) for(ll i=0;i<n;++i)cout<<A[i]<<' ';cout<<endl;
#define take(A,n) for(ll i=0;i<n;++i)cin>>A[i];
//    for(auto& it : m)
void fastio(){ios_base::sync_with_stdio(false);cin.tie(NULL);}


int main()
{
  fastio();

int t;
scanf("%d",&t);
while(t--)
{
  ll int ans=0;

    char s[200];
    scanf(" %[^\n]s",s);
   
  for(int i=0;i<strlen(s)-2;i++)
  {
    if(s[i]=='n' && s[i+1]=='o' && s[i+2]=='t' && s[i+3]==' ' && i==0)
      ans=1;
    else if(s[i]==' ' && s[i+1]=='n' && s[i+2]=='o' && s[i+3]=='t' && s[i+4]==' ')
      ans=1;
    else if(s[i]==' ' && s[i+1]=='n' && s[i+2]=='o' && s[i+3]=='t' && i+4==strlen(s))
      ans=1;
    else if(s[i]=='n' && s[i+1]=='o' && s[i+2]=='t' && strlen(s)==3)
      ans=1;
    
  }

 if(ans==1)
  cout<<"Real Fancy"<<endl;
 else 
  cout<<"regularly fancy"<<endl;

}
} 

