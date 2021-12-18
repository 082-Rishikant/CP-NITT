#include <iostream>
using namespace std;

// Q2)- Hashing Technique question in notebook
const int n = 1e7 + 10;
int hsh[n];

void optimized_Approach() // O(t)+O(n)
{
    // Hahsing Technique
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        hsh[arr[i]]++;
    }
    int Q;
    cin >> Q;
    int query[Q];
    for (int i = 0; i < Q; i++)
    {
        cin >> query[i];
    }
    for (int i = 0; i < Q; i++)
    {
        cout << hsh[query[i]] << " ";
    }
}

void bruteForce() // O(N*Q)=O(10^10) that will give TLE for 1 sec
{
    int N;
    cin >> N;
    // cout<<endl;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    // cout<<endl;
    int Q;
    cin >> Q;
    // cout<<endl;
    int query[Q];
    for (int i = 0; i < Q; i++)
    {
        cin >> query[i];
    }
    // cout<<endl;
    for (int i = 0; i < Q; i++)
    {
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            if (arr[j] == query[i])
            {
                count++;
            }
        }
        cout << count << " ";
    }
}

int main()
{
    // bruteForce();
    optimized_Approach();
    return 0;
}