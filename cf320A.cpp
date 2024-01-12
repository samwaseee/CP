#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, flag = 0;
    cin>>n;
    while (n > 0)
    {
        int t;
        t = n % 10;
        //cout<<t<<endl;
        if (t != 1)
        {
            t = n % 100;
            //cout<<t<<endl;
            if (t != 14)
            {
                t = n % 1000;
                //cout<<t<<endl;
                if (t != 144)
                {
                    flag = 1;
                    break;
                }
                else
                n/=1000;
            }
            else
            n/=100;
        }
        else 
        n/=10;
    }
    flag==0 ? cout<<"YES" : cout<<"NO";
}