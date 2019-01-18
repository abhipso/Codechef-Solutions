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

ll int test;
cin>>test;

while(test--)
{
  ll int n,t,x,y,z;
  cin>>n>>t>>x>>y>>z;

  ll int num,den=2*n+1;
  if(t==1)
  {
     if(x==z && y<x) 
      num=y+1;
     else if(x==z && y>x)
      num=y-1;
     else if(x>y)
      num=den-(y-1);
     else if(x<y)
      num=den-(y+1);
  }
  else if(t==3)
  {
     if(x==z && y<x)
      num=y+1;
     else if(x==z && y>x)
      num=y-1;
     else if(z>y)
      num=den-(y-1);
     else if(z<y)
      num=den-(y+1);
  }
  else if(t==2 || t==4)
      num=den-(x+z);


ll int g=__gcd(num,den);
num/=g;
den/=g;

cout<<num<<" "<<den<<endl;
}
}
 
