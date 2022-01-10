#include <bits/stdc++.h>
#define int long long int //1e18=2^63

using namespace std;

void solve()
{
	string s;
	cin >> s;
	int l=s.size();
	l=pow(2, l);
	for(int i=1;i<l;i++)
	{
		int idx=0;
		int temp=i;
		while(temp!=0)
		{
			if((temp&1)!=0)
			{
				cout<<s[idx];
			}
			idx++;
			temp=temp>>1;
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

	int t = 1;
	//cin>>t;
	while (t--)
		solve();

	return 0;
}