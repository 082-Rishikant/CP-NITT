#include <iostream>
using namespace std;

// Q3)- Prefix Sum Technique. question in notebook

void optimized_Approach() // O(Q)+O(N)
{
    int N;
    cin>>N;
    int arr[N+1];
    int pref_Sum[N+1];
    pref_Sum[0]=0;
    for(int i=1;i<=N;i++)
    {
        cin>>arr[i];
        pref_Sum[i]=pref_Sum[i-1]+arr[i];
    }
    int Q;
    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        int l, r;
        cin>>l>>r;
        cout<<pref_Sum[r]-pref_Sum[l-1]<<endl;
    }
}

void bruteForce() // O(N*Q)=O(10^10) that will give TLE for 1 sec
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int Q;
    cin>>Q;
    int qury[Q][2];
    for(int i=0;i<Q;i++)
    {
        cin>>qury[i][0];
        cin>>qury[i][1];
    }
    for(int i=0;i<Q;i++)
    {
        int sum=0;
        for(int j=qury[i][0];j<=qury[i][1];j++)
        {
            sum+=arr[j];
        }
        cout<<sum<<" ";
    }
}

int main()
{
    // bruteForce();
    optimized_Approach();
    return 0;
}