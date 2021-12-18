#include<iostream>
#include<vector>
#include<cstring>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main()
{
  string X;
  cin>>X;
  unordered_map<char, int> ump;
  for(int i=0;i<26;i++)
  {
    ump[X[i]]=i;
  }
  int N;
  cin>>N;
  vector<string> vec;
  for(int i=0;i<N;i++)
  {
    string s;
    cin>>s;
    int l=s.length();
    for(int j=0;j<l;j++)
    {
      s[j]=(char)ump[s[j]];
    }
  	vec.push_back(s);
  }
  
  sort(vec.begin(), vec.end());
  
  for(int i=0;i<N;i++)
  {
    string s=vec[i];
    int l=s.length();
    for(int j=0;j<l;j++)
    {
      s[j]=X[(int)s[j]];
    }
  }
  for(string s:vec)
  {
    cout<<s<<endl;
  }
  return 0;
}