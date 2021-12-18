#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n, q;cin>>n>>q;
        vector<int> arr(1, 0);
        for(int i=1;i<=n;i++)
        {
            int a;cin>>a;
            arr.push_back(a);
        }
        arr.push_back(0);
        vector<int> f(n+2, 0);
        vector<int> b(n+2, 0);
        for(int i=1;i<=n;i++)
        {
            f[i]=__gcd(f[i-1],arr[i]);
        }
        for(int i=n;i>=1;i--)
        {
            b[i]=__gcd(b[i+1], arr[i]);
        }
        while (q--)
        {
            int l,r;cin>>l>>r;
            cout<<__gcd(f[l-1], b[r+1])<<endl;
        }
        return 0;
    }
    
}