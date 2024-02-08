#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s ;
    cin>>s;

    int a[s.length()] = {0} ,t ;

    for (int i = 0; i < s.length()-1; i++)
    {
        if(s[i]==s[i+1])
        a[i+1]=a[i]+1;
        else
        a[i+1]=a[i];
    }

    cin>>t;

    for (int i = 0; i < t; i++)
    {
        int l , r;
        cin>>l>>r;

        cout<<a[r-1] - a[l-1]<<endl;
    }

    // for (int i = 0; i < s.length(); i++)
    // {
    //     cout<<a[i];
    // }
    
    
    
}