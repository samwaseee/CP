#include<bits/stdc++.h>

using namespace std;

int lb(int arr[] , int s ,int j)
{
    int l=0,r=j;
    int m;

    while(l<r)
    {
        m = (r+l)/2;
        //cout<<l<<" ";
        if(arr[m] == s ) {
            break ;}
        else if(arr[m] < s )
            l = m+1 ;
        else 
            r = m-1 ;
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

        cout<<lb(a,x,n);
        cout<<endl;
    }
}