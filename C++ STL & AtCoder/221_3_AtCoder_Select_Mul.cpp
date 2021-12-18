#include<bits/stdc++.h>
using namespace std;

long long eval(string N)
{
  int l=N.size();
  vector<string> vec;
  vec.push_back(N);
  while(next_permutation(N.begin(), N.end()))
        {
          vec.push_back(N);
        }
        long long maxProduct=0;
  for(int i=l-1;i>0;i--)
        {
          for(string s:vec)
          {
            string s1=s.substr(0, i);
            string s2=s.substr(i, l);
            long long n1=stoll(s1, nullptr, 10);
            long long n2=stoll(s2, nullptr, 10);
            maxProduct=max(maxProduct, n1*n2);
          }
  		}
     return maxProduct;
}

int main()
{
  string N;
  cin>>N;
  cout<<eval(N);
  return 0;
}