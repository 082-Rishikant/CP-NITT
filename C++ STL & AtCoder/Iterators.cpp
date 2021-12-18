#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> vec(5);
    // vector<int>::iterator it;
    // int i=0;
    // for(it=vec.begin();it!=vec.end();it++)
    // {
    //     *it=i++;
    // }
    // vector<int>::reverse_iterator it2;
    // for(it2=vec.rbegin();it2!=vec.rend();it2++)
    // {
    //     cout<<*it2<<" ";
    // }

    vector<int> myvec={2,5,1,9,6,4,33,7};
    for(auto it=myvec.cbegin();it!=myvec.cend();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto itr=myvec.crbegin();itr!=myvec.crend();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<"\nSize:"<<myvec.size();
    cout<<"\nCapacity:"<<myvec.capacity();
    cout<<"\nMaxSize:"<<myvec.max_size();
    myvec.resize(4);
    cout<<endl;
    for(auto it=myvec.cbegin();it!=myvec.cend();it++)
    {
        cout<<*it<<" ";
    }
    myvec.resize(7, 200);
    cout<<endl;
    for(auto it=myvec.cbegin();it!=myvec.cend();it++)
    {
        cout<<*it<<" ";
    }
    myvec.resize(10);
    cout<<endl;
    for(auto it=myvec.cbegin();it!=myvec.cend();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n"<<myvec.empty();
    return 0;
}
