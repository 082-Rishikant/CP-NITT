#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k;
  cin>>k;
  int a, b;
  cin>>a>>b;
  int num1=0, num2=0;
  int i=0;
  while(a>0)
  {
  	num1+=pow(k, i)*(a%10);
    a=a/10;
    i++;
  }
  i=0;
  while(b>0)
  {
  	num2+=pow(k, i)*(b%10);
    b=b/10;
    i++;
  }
  long long int ans=num1*num2;
  cout<<ans;
  return 0;
}