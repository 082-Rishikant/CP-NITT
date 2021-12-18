#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int maxi=0;
    sort(arr,arr+n);
    for (int i = 0; i < n-1; i++)
    {
        int sum;
        if(arr[i]==arr[i+1]);
        {
            sum=arr[i];
            i++;
        }
        
        for (int j = 0; j < n; j++)
        {
            
            sum=sum&arr[j];
           
        }
        maxi=max(maxi, sum);
    }
    cout<<maxi;
    return 0;
}