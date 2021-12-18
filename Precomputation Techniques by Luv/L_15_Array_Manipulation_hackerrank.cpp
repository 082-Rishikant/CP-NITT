#include<iostream>
#include<vector>
using namespace std;

const int N=1e7+2;
long long arr[N];

// bruteForce Approach
/*int main()
{
    int n,q;cin>>n>>q;
    while(q--)
    {
        int x,y,k;cin>>x>>y>>k;
        for (int j = x; j <= y; j++)
        {
            arr[j]+=k;
        }
    }
    int maxi=0;
    for (int i=1;i<=n;i++)
    {
        maxi=max(maxi, arr[i]);
    }
    cout<<maxi;
    return 0;
}*/

// Optimized Approach Most Important
int main()
{
    int n,q;cin>>n>>q;
    while(q--)
    {
        int x,y,k;cin>>x>>y>>k;
        arr[x]+=k;
        arr[y+1]=arr[y+1]-k;
    }

    //Now Find Prefix sum of the array
    for (int i = 1; i <= n; i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }

    long long maxi=0;
    for (int i=1;i<=n;i++)
    {
        maxi=max(maxi, arr[i]);
    }
    cout<<maxi;
    return 0;
}