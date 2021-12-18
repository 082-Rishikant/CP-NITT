# include<iostream>
# include<cmath>

using namespace std;

void solve()
{
  long long n,x,sum=0,i=0,var1,var2,result;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
   cin>>arr[i];
   sum+=arr[i];
  }
  cin>>x;
  var1=x/sum;
  var2=x%sum;
  while(var2>=0)
  {
   var2-=arr[i%n];
   i++;
  }
  result=(n*var1)+i;
  cout<<result;


  

}

int main()
{
   solve();
   return 0;
}