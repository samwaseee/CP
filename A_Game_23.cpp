#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, cnt = 0,flag=0;
    cin >> n >> m;

    int t = m / n;

    while (t != 1)
    {
        flag=1;
        if (t % 3 == 0)
        {
            t /= 3;
            cnt++;
        }
        else if(t%2==0)
        {
            t /= 2;
            cnt++;
        }
        else{
            flag=0;
            break;
        }
    }
    flag ? cout << cnt : cout<<"-1";
}