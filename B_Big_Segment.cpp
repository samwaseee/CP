#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,min=1e9+5,max=0;
    cin>>n;
    
    int arr[n][2];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
        if(arr[i][0]<min) 
            min=arr[i][0];
            
        if(arr[i][1]>max) 
            max=arr[i][1];
            
    }
    
    int i;
    
    for(i=0;i<n;i++)
    {
        if(arr[i][0]==min && arr[i][1]==max)
        {
            cout<<i+1<<endl;
            break;
        }
        
    }
    
    if(i==n) cout<<"-1"<<endl;
}