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
  ll int n,m;
  cin>>n>>m;

  if(n==1 && m==1)
    cout<<"1\n1"<<endl;
  else if(n==1 && m==2)
    cout<<"1\n1 1"<<endl;
  else if(n==2 && m==1)
    cout<<"1\n1\n1"<<endl;
  else if(n==2 && m==2)
    cout<<"2\n1 1\n2 2"<<endl;
  else if(n==1)
  {
    cout<<"2\n";
    string s="1122";
    for(ll int i=0;i<m;i++)
      cout<<s[i%4]<<" ";
    cout<<endl;
  }
  else if(m==1)
  {  
    cout<<"2\n";
    string s="1122";
    for(ll int i=0;i<n;i++)
      cout<<s[i%4]<<endl;
  }
  else if(n==2)
  {  
    cout<<"3\n";
    string s1="112233";
    string s2="233112";
    for(ll int i=0;i<m;i++)
      cout<<s1[i%6]<<" ";
    cout<<endl;
    for(ll int i=0;i<m;i++)
      cout<<s2[i%6]<<" ";  
    cout<<endl;
  }
  else if(m==2)
  {
    cout<<"3\n";
    string s1="112233";
    string s2="233112";
    for(ll int i=0;i<n;i++)
       cout<<s1[i%6]<<" "<<s2[i%6]<<endl;
  }
  else
  {
    string s="11223344";
    cout<<"4\n";
    for(ll int j=0;j<n;j++)
    {
       for(ll int i=3*j;i<3*j+m;i++)
         cout<<s[i%8]<<" ";

       cout<<endl;
    }
  }
  
}
}



