#include<bits/stdc++.h>
#define int long long int //1e18=2^63

using namespace std;

void solve()
{
  int n, k;cin>>n>>k;
  if((n/2+(n%2!=0))<k)
  {
      cout<<-1<<endl;
    //   cout<<n/2+(n%2!=0)<<endl;
      return;
  }
  int rw=0,cl=0,cnt=0;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          if(rw==i && cl==j && cnt<k)
          {
              cout<<"R";
              cnt++;
              rw=rw+2;cl=cl+2;
          }
          else
          {
              cout<<".";
          }
      }
      cout<<endl;
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