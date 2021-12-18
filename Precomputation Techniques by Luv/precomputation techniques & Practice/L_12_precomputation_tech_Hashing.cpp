#include<iostream>
using namespace std;

// Q1)- Given T test cases and for each test cases N is given Find the
//      factorial of N for each test case%M where M=10^9+7.
//   1<=T<=10^5
//   1<=N<=10^5
const int M = 1e9 + 7;

void optimized_Approach()  // O(t)+O(n)
{
    int N=1e5+10;
    int arr[N];
    arr[0]=arr[1]=1;
    for(int i=2;i<=N;i++)
    {
        arr[i]=(arr[i-1]*i)%M;
    }
    int T;
    cin >> T;
    while (T--)  
    {
        int n;
        cin >> n;
        cout << arr[n];
    }
}

void bruteForce() // O(n*t)=O(10^10)
{
    int T;
    cin >> T;
    while (T--)    // O(N*T) which is equal to 10^10 in large test case
    {
        int n;
        cin >> n;
        long long fact = 1;
        for (int i = 2; i <= n; i++)
        {
            fact = (fact * i) % M;
        }
        cout << fact;
    }
}

int main()
{
    // bruteForce();
    optimized_Approach();
    return 0;
}