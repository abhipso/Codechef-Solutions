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
  ll int n,m,x;
  cin>>n>>m;

  vector< pair<ll int,ll int> > a;
  vector< pair<ll int,ll int> > b;

  for(ll int i=0;i<n;i++)
  {  cin>>x; a.push_back(make_pair(x,i));  }
  for(ll int i=0;i<m;i++)
  {  cin>>x; b.push_back(make_pair(x,i));  }

  sort(a.begin(),a.end());
  sort(b.begin(),b.end());


   for(ll int i=0;i<n&&i<m;i++)
     cout<<a[i].second<<" "<<b[i].second<<endl;
 if(n==m)
 {
   for(ll int i=0;i<min(n,m)-1;i++)
      cout<<a[i].second<<" "<<b[i+1].second<<endl;
 }
 else if(n<m)
 {
   for(ll int i=0;i<n&&i<m;i++)
      cout<<a[i].second<<" "<<b[i+1].second<<endl;
   for(ll int i=min(n,m);i<max(n,m)-1;i++)
      cout<<a[min(n,m)-1].second<<" "<<b[i+1].second<<endl;
 }
 else
 {
   for(ll int i=0;i<n&&i<m;i++)
      cout<<a[i+1].second<<" "<<b[i].second<<endl;
   for(ll int i=min(n,m);i<max(n,m)-1;i++)
      cout<<a[i+1].second<<" "<<b[min(n,m)-1].second<<endl;
 }

}


 
