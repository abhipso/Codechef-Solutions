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
cin>>t;

while(t--)
{
  ll int n,a,b,ans=0,x=0;
  cin>>n>>a>>b;

  ll int z[n];
  for(ll int i=0;i<n;i++)
  {
     cin>>z[i];
     if(z[i]%a==0)
       ans++;
     if(z[i]%b==0)
       ans--;
     if(z[i]%a==0 && z[i]%b==0)
       x++;
  }

if(ans>0 || (x!=0&&ans==0) )
  cout<<"BOB"<<endl;
else 
  cout<<"ALICE"<<endl;

}
}
  

