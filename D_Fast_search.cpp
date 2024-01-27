#include<bits/stdc++.h>

using namespace std;

int lb(int arr[] , int j ,int s)
{
    int l=-1,r=j;
    int m;

    while(l<r-1)
    {
        m = (r+l)/2;
        if(arr[m] < s )
            l = m ;
        else 
            r = m ;
    }

    return r;
}
int ub(int arr[] , int j ,int s)
{
    int l=-1,r=j;
    int m;

    while(l<r-1)
    {
        m = (r+l)/2;
        //cout<<l<<" ";
        if(arr[m] <= s )
            l = m ;
        else 
            r = m ;
    }

    return r;
}

int main()
{
    int n,k;

    cin>>n;

    int a[n+5];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    cin>>k;
    
    while(k--)
    {
        int l ,r ;
        cin>>l>>r;

        cout<<ub(a,n,r)-lb(a,n,l)<<" ";
    }
}