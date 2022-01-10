#include<bits/stdc++.h>
#define int long long int //1e18=2^63

using namespace std;

void solve()
{
  int n;cin>>n;
  int currL=INT_MAX, currR=INT_MIN, currC=0;
  for(int i=0;i<n;i++)
  {
    int l,r,c;cin>>l>>r>>c;
    if(l<currL && r>currR)
    {
      currL=l;currR=r;currC=c;
    }
    else if(l>=currL && r>currR)
    {
      currR=r;currC=c+currC;
    }
    else if(l<currL && r<=currR)
    {
      currL=l;currC=c+currC;
    }
    // else if(l>currL && r<currR)
    // {

    // }
    // else if(l==currL && r==currR)
    // {
    //   currC=min(currC, c);
    // }
    cout<<currC<<endl;
  }
}

int32_t main() //1e9=2^31
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    while(t--)solve();
    
    return 0;
}