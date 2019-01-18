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
  ll int t;
  cin>>t;
  while(t--)
  {
     ll int n,p;
     cin>>n>>p;
     ll int x=n/2- ( (n&1)?0:1 );
     ll int ans= (p-x)*(p-x) + (p-n)*(p-x) + (p-n)*(p-n);
     if(n==1||n==2)ans=p*p*p;
     cout<<ans<<endl;
  }
}


