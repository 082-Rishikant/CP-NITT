#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin>>N;
  int arr[N];
  for(int i=0;i<N;i++)
  {
  	cin>>arr[i];
  }
  long long int X;
  cin>>X;
  long long int num=0;
  long long int i=0;
  while(i<N*1e+100)
  {
    if(num>=X)
    {
      cout<<i;
      return 0;
    }
  	num+=arr[i%N];
    i++;
  }
  return 0;
}