

#include <iostream>

using namespace std;
const int n=1e6+10;
int hsh[n];
int main() {
	int N, K;
	cin >>N>>K;	
	for(int i=1;i<=N;i++)
	{
		int a;
		cin>>a;
		hsh[a]++;
	}
	for(int i=K/2;i>0;i--)
	{
		if(hsh[i]!=0)
		{
			if(hsh[K-i]!=0 && hsh[K-i]>=2)
			{
				cout<<"YES";
				return 0;
			}
			else if(hsh[K-i]!=0 && i!=(K-i))
			{
				cout<<"YES";
				return 0;
			}
			else
			{
				continue;
			}
		}
	}
	cout<<"NO";
	return 0;
}
