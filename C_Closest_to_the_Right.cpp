#include<bits/stdc++.h>

using namespace std;

int lb(int arr[] , int s ,int j)
{
    int l=0,r=j+1;
    int m;

    while(l+1<r)
    {
        m = (r+l)/2;
        //cout<<l<<" ";
        if(arr[m] < s )
            l = m ;
        else 
            r = m ;
    }

    return r;
}

int main()
{
    int n,k;

    cin>>n>>k;

    int a[n+5];

    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    
    while(k--)
    {
        int x;
        cin>>x;

        cout<<lb(a,x,n);
        cout<<endl;
    }
}