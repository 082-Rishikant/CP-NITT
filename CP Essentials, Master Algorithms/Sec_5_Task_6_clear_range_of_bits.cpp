#include<bits/stdc++.h>
#define int long long int //1e18=2^63

using namespace std;

void solve()
{
  int n;int i;int j;
  cin>>n>>i>>j;
  int temp1=pow(2, i)-1;
  int mask=((-1)<<(j+1)) | temp1;
  cout<<(mask & n);
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