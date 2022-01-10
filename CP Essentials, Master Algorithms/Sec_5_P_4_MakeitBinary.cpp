#include<bits/stdc++.h>
#include<math.h>
#define int long long int //1e18=2^63

using namespace std;

void solve()
{
  int n;cin>>n;
  int m=n;
  // make it binary using bitwise operators
  int ans=0;int p=1;
  while (n)
  {
    int lastBit=(n&1);
    ans=ans+lastBit*p;
    p=p*10;
    n=n>>1;
  }
  cout<<ans<<"\n";

  // Method-2
  // this ide is not working right 
  ans=0;p=0;
  n=m;
  while (n)
  {
    int lastBit=(n&1);
    cout<<pow(10, p)<<" ";
    int temp=pow(10, p);
    ans=ans+lastBit*temp;
    p++;
    n=n>>1;
  }
  cout<<ans<<"\n";
}

int32_t main() //1e9=2^31
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    //cin>>t;
    while(t--)solve();
    
    return 0;
}