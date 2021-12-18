#include <iostream>
using namespace std;

// Q4)- Prefix Sum Technique. question in notebook

const int N = 1e3 + 10;
int arr[N][N];
long long preFixSum[N][N];

void optimized_Approach() // O(Q)+O(N*N)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
            preFixSum[i][j]=arr[i][j]+preFixSum[i][j-1]+preFixSum[i-1][j]-preFixSum[i-1][j-1];
        }
    }
    int Q;
    cin >> Q;
    for (int i = 1; i <= Q; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout<<(preFixSum[c][d]-preFixSum[c][b-1]-preFixSum[a-1][d]+preFixSum[a-1][b-1])<<" ";
    }
}

void bruteForce() // O(Q)+O(Q*N*N)=O(10^11) that will give TLE for 1 sec
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int Q;
    cin >> Q;
    for (int i = 1; i <= Q; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        long long sum = 0;
        for (int j = a; j <= c; j++)
        {
            for (int k = b; k <= d; k++)
            {
                sum += arr[j][k];
            }
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