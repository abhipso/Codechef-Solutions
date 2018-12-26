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
  ll int n,c,iter1,iter2;
  cin>>n>>c;

  for(ll int i=1;i<=n;i=i+1000)
  {
     cout<<"1 "<<i<<endl;

     int x;
     cin>>x;

     if(x==1)
     {
       cout<<"2"<<endl;
       iter1=max( (ll int)1,i-1000 );
       break;
     }
     else if(x==0)
       iter1=max( (ll int)1,i-1000 );
   }

  for(ll int i=iter1;i<=n;i=i+100)
  {
     cout<<"1 "<<i<<endl;

     int x;
     cin>>x;
     if(x==1)
     {
       cout<<"2"<<endl;
       iter2=max( (ll int)iter1,i-100 );
       break;
     }
     else if(x==0)
       iter2=max( (ll int)iter1,i-100 );

   }


  for(ll int i=iter2;i<=n;i=i+1)
  {
     cout<<"1 "<<i<<endl;

     int x;
     cin>>x;
     if(x==1)
     {
       cout<<"2"<<endl;
       cout<<"3 "<<i<<endl;
       break;
     }
   }

}
