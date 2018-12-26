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


  ll int n;
  cin>>n;

  ll int ans[n];


  ll int limit;

  if(n%4==0)
   limit=n-1;
  else if(  (n-1)%4==0  )
   limit=n-6;
  else if(  (n-2)%4==0  )
   limit=n-10;
  else if(  (n-3)%4==0  )
   limit=n-8;


  for(ll int i=1;i<limit;i=i+4)
  {
     ll int a1,a2,a3,a4,A;

     cout<<"1 "<<i<<" "<<i+1<<" "<<i+2<<endl;
     cin>>a1;
     cout<<"1 "<<i<<" "<<i+1<<" "<<i+3<<endl;
     cin>>a2;
     cout<<"1 "<<i<<" "<<i+2<<" "<<i+3<<endl;
     cin>>a3;
     cout<<"1 "<<i+1<<" "<<i+2<<" "<<i+3<<endl;
     cin>>a4;

     A=a1^a2^a3^a4;
     ans[i+0]=A^a4;
     ans[i+1]=A^a3;
     ans[i+2]=A^a2;
     ans[i+3]=A^a1;

  }

  if( (n-1)%4==0 || (n-2)%4==0 )
  {
     ll int a1,a2,a3,a4,a5;

     cout<<"1 "<<n-4<<" "<<n-3<<" "<<n-1<<endl;
     cin>>a1;
     cout<<"1 "<<n-4<<" "<<n-2<<" "<<n-1<<endl;
     cin>>a2;
     cout<<"1 "<<n-4<<" "<<n-2<<" "<<n<<endl;
     cin>>a3;
     cout<<"1 "<<n-3<<" "<<n-2<<" "<<n<<endl;
     cin>>a4;
     cout<<"1 "<<n-3<<" "<<n-1<<" "<<n<<endl;
     cin>>a5;

     ans[n-4]=a4^a5^a2;
     ans[n-3]=a5^a2^a3;
     ans[n-2]=a3^a1^a5;
     ans[n-1]=a1^a3^a4;
     ans[n-0]=a4^a1^a2;

  }


  if( (n-2)%4==0 )
  {
     ll int a1,a2,a3,a4,a5;

     cout<<"1 "<<n-4-5<<" "<<n-3-5<<" "<<n-1-5<<endl;
     cin>>a1;
     cout<<"1 "<<n-4-5<<" "<<n-2-5<<" "<<n-1-5<<endl;
     cin>>a2;
     cout<<"1 "<<n-4-5<<" "<<n-2-5<<" "<<n-5<<endl;
     cin>>a3;
     cout<<"1 "<<n-3-5<<" "<<n-2-5<<" "<<n-5<<endl;
     cin>>a4;
     cout<<"1 "<<n-3-5<<" "<<n-1-5<<" "<<n-5<<endl;
     cin>>a5;

     ans[n-4-5]=a4^a5^a2;
     ans[n-3-5]=a5^a2^a3;
     ans[n-2-5]=a3^a1^a5;
     ans[n-1-5]=a1^a3^a4;
     ans[n-0-5]=a4^a1^a2;

  }


  if( (n-3)%4==0 )
  {
     ll int a1,a2,a3,a4,a5,a6,a7;

     cout<<"1 "<<n-6<<" "<<n-4<<" "<<n-2<<endl;
     cin>>a1;
     cout<<"1 "<<n-6<<" "<<n-4<<" "<<n-1<<endl;
     cin>>a2;
     cout<<"1 "<<n-6<<" "<<n-3<<" "<<n-1<<endl;
     cin>>a3;
     cout<<"1 "<<n-5<<" "<<n-3<<" "<<n-1<<endl;
     cin>>a4;
     cout<<"1 "<<n-5<<" "<<n-3<<" "<<n<<endl;
     cin>>a5;
     cout<<"1 "<<n-5<<" "<<n-2<<" "<<n<<endl;
     cin>>a6;
     cout<<"1 "<<n-4<<" "<<n-2<<" "<<n<<endl;
     cin>>a7;

     ans[n-6]=a1^a2^a3^a5^a6;
     ans[n-5]=a1^a2^a4^a5^a6;
     ans[n-4]=a1^a2^a4^a5^a7;
     ans[n-3]=a3^a4^a5^a7^a1;
     ans[n-2]=a6^a7^a1^a3^a4;
     ans[n-1]=a2^a3^a4^a6^a7;
     ans[n-0]=a5^a6^a7^a2^a3;

  }


cout<<"2 ";
for(ll int i=1;i<=n;i++)
 cout<<ans[i]<<" ";

cout<<endl;

int z;
cin>>z;

}
}
