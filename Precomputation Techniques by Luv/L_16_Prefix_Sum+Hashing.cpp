#include<iostream>
#include<vector>
#include<set>
using namespace std;

//Brute Force Approach
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,q;cin>>n>>q;
        string s;cin>>s;
        while (q--)
        {
            vector<int> hsh(26, 0);
            int l,r;cin>>l>>r;
            l--,r--;
            for (int i = l; i <= r; i++)
            {
                hsh[s[i]-'a']++;
            }
            int cntodd=0;
            for (int i = 0; i < 26; i++)
            {
                if(hsh[i]%2!=0)
                {
                    cntodd++;
                }
            }
            if(cntodd>1)
                cout<<"NO";
            else
                cout<<"YES";
        }
    }
    return 0;
}

//Optimized Approach
/*int main()
{
    int t;cin>>t;
    while(t--) 
    {
        int n,q;cin>>n>>q;
        string s;cin>>s; //o(n)
        vector<vector<int>> hsh(26, vector<int>(n+1, 0)); //O(26*n)
        for (int i = 0; i < n; i++) //O(n)
        {
            hsh[s[i]-'a'][i+1]++;
        }
        for (int i = 0; i < 26; i++) //O(26*n)
        {
            for (int j = 1; j <= n; j++)
            {
                hsh[i][j]+=hsh[i][j-1];
            }
        }

        while (q--) //O(q*26)
        {
            int l,r;cin>>l>>r;
            // l--,r--;
            int cntodd=0;
            for (int i = 0; i < 26; i++) //O(26)
            {
                if((hsh[i][r]-hsh[i][l-1])%2!=0)
                {
                    cntodd++;
                }
            }
            if(cntodd>1)
                cout<<"NO";
            else
                cout<<"YES";
        }
    }
    return 0;
}*/