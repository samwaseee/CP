#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, minsum = 0, sum = 0, k = 1, t=1;

    cin >> n >> m;

    int a[n + 10];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (i == m)
            minsum = sum;
        if (i > m)
        {
            sum -= a[k];
            k++;
            // cout<<k<<endl;

            if (minsum > sum)
            {
                minsum = sum;
                t = k;
            }
        }
    }

    //cout<<minsum<<" "<<sum;
    cout<<t;
}