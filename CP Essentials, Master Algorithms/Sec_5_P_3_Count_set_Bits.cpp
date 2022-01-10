#include<bits/stdc++.h>
#define int long long int //1e18=2^63

using namespace std;

void solve()
{
  int n;cin>>n;
  int m=n;
  // Method 1  O(logn)
  int i=0;
  while(n)
  {
    if(n%2==1)
    {
      i++;
    }
    n=n/2;
  }
  cout<<i<<"\n";

  // Method-2 O(logn)
  n=m;
  i=0;
  while(n)
  {
    if(n&1)
    {
      i++;
    }
    n=n>>1;
  }
  cout<<i<<"\n";

  // Method-3 O(logn) Most Efficient
  n=m;
  i=0;
  while(n)
  {
    n=n&(n-1);
    i++;
  }
  cout<<i<<"\n";
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