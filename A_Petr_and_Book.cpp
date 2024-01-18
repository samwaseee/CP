#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[10];

    cin>>n;
    for (int i = 0; i < 7; i++)
    {
        cin>>a[i];
    }
    int total = 0, i = 0;
    while(total < n)
    {
        if(i < 7)
        {
            total += a[i];
            i++;
        }
        else
        {
            i = 0;
        }
    }
    cout << i << endl;


    return 0;
}