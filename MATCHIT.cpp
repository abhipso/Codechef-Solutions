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
  ll int n,m;
  cin>>n>>m;

  int a[n+1][n+1];
  for(ll int j=0;j<=n;j++)
  {
     for(ll int i=0;i<=n;i++)
       a[j][i]=0;
  }

  for(ll int i=0;i<2*m;i++)
  {  ll int xa,ya; cin>>xa>>ya;  a[xa][ya]=1; }
 
  ll int arraynoneed[n*n];
  for(ll int i=0;i<n*n;i++)
    cin>>arraynoneed[i];

   int x=-1,y=-1,cnt=0;int j=1;
   for(ll int i=1,cntloop=1;cntloop<=n*n;i++,cntloop++)
   {
        if(a[j][i]==1 && x==-1)
           {   x=j;y=i; cnt=1;  }
        else if(a[j][i]==1 && x!=-1)
           {  cnt++; a[x][y]=cnt; x=-1; }
        else if(x!=-1)
           { cnt++;  a[j][i]=1; }
       
        
        if(i==n && j%2==1)
        { j++;i++; }
        else if(i==1 && j%2==0)
        { j++;i--; }
        if(j%2==0)
          i-=2;
   }

    j=1;
   for(ll int i=1,cntloop=1;cntloop<=n*n;i++,cntloop++)
   {
        if(a[j][i]>1)
           { cout<<endl<<a[j][i]<<" "<<j<<" "<<i<<" ";   }
        else if(a[j][i]==1)
           { cout<<j<<" "<<i<<" "; }


        if(i==n && j%2==1)
        { j++;i++; }
        else if(i==1 && j%2==0)
        { j++;i--; }
        if(j%2==0)
          i-=2;

   }
 
}        

