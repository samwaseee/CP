#include<bits/stdc++.h>

using namespace std;

int lb(int arr[] , int j ,int s)
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

    cin>>n>>k;

    int a[n+2];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    while(k--)
    {
        int x;
        cin>>x;

        cout<<lb(a,n,x);
        cout<<endl;
    }
}