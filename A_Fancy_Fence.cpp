#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        
        double y;
        y = 2.00 /(1.00 - (x/180.00));

        string d = to_string(y);

        size_t pos = d.find('.');

        //cout<<d[pos+1]<<endl;
        
        x >= 60 ?
            (d[pos+1] == '0' && d[pos+2] == '0' && d[pos+3] == '0' ) ? cout<<"YES"<<endl : cout<<"NO"<<endl
            : cout<<"NO"<<endl ;
    }
}