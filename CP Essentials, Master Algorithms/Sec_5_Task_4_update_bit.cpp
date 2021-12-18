#include<bits/stdc++.h>
#define int long long int //1e18=2^63

using namespace std;

void solve()
{
  int n;int k;int i;
  cin>>n>>k>>i;
  int mask=(pow(2, k));
  mask=~mask;
  n=n&mask;
  cout<<(n|(i<<k));
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