#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 998244353
#define print(A,n) for(ll i=0;i<n;++i)cout<<A[i]<<' ';cout<<endl;
#define take(A,n) for(ll i=0;i<n;++i)cin>>A[i];
//    for(auto& it : m)
void fastio(){ios_base::sync_with_stdio(false);cin.tie(NULL);}


ll int primes[2000];
void Sieve(ll int n) 
{ 
     ll int j=0;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    {  
        if (prime[p] == true ) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
      
      for (int p=2; p<=n; p++) 
       if (prime[p]) 
          primes[j++]=p;
  
} 


int main()
{
  fastio();
  Sieve(17390);


ll int t;
cin>>t;
while(t--)
{

  ll int n;
  cin>>n;

  ll int last=2,count=0,star=0;

   for(ll int j=0;;j++)
   {
      star+=j;
         for(ll int k=0;k<=j;k++)
         {
           // cout<<endl<<k+j+star<<" "<<last<<"    ";
             for(ll int i=0;i+j+k+star<2000;i++)
             {
               if(i+j+k==0)
                 continue;
               else
               { 
                   cout<<last*primes[i+j+k+star]<<" ";
                   last=primes[i+j+k+star];
                   count++;
                   i+=j;
                  if(count==n-1)
                     goto out;
               }
             }
         }
   }
    
  out:

  cout<<last*2<<endl;
}
}




