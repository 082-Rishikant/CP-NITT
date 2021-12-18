#include<bits/stdc++.h>
#define int long long int //1e18=2^63

using namespace std;

void solve()
{
  // i and j are starts from 1 indexing
  int n, m, i, j;
  cin>>n>>m>>i>>j;
  // first unset all bits in n from i to j
  int temp=pow(2, i-1)-1;
  int mask=temp | ((-1)<<j);
  n=n&mask;
  m=m<<(i-1);
  cout<<(n|m);
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