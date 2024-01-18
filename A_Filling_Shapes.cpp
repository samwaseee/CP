#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    long long m = 2<<(n-1)/2;

    (n&1) ? cout<<"0" : cout<<m;
}