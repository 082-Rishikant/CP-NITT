#include<bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n) {
    if(n<=0)
    {
        return false;
    }

    //binary of 1431655765 is 1010101010101010101010101010101 
    //We are doing AND of n with this no. just to check if it is power of four
    //binary of power of four will have set bit('1') at even positions only
    return (n&(n-1))==0  && (1431655765&n)==n;
}