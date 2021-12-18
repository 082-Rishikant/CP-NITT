#include<bits/stdc++.h>
#define int long long int //1e18=2^63

using namespace std;

void solve()
{
  int n=9;int k=6;
  set<int> st;
  for(int i=0;i<n;i++)
  {
    int a;cin>>a;
    st.insert(a);
  }
  int cnt=0,ans;
  set<int>::reverse_iterator it;
  for(it=st.rbegin();it!=st.rend();it++)
  {
    if(cnt==k-1)
    {
      ans=*it;
      break;
    }
    cnt++;
  }
  cout<<ans;
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