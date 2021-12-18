# include<iostream>
# include<cmath>

using namespace std;

void solve()
{
   long long k,a,b,sum1=0,sum2=0,i=0,j=0,result;
   cin>>k>>a>>b;
   while(a>0)
   {
   	int rem=a%10;
   	sum1+=rem*pow(k,i);
   	i++;
   	a=a/10;
   }
   while(b>0)
   {
   	int rem=b%10;
   	sum2+=rem*pow(k,j);
   	j++;
   	b=b/10;
   }
   result=sum1*sum2;
   cout<<result;

}

int main()
{
	solve();
	return 0;
}