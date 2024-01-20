#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[5] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        a[x]++;
    }

    a[1] -= a[3];
    if (a[1] < 0)
        a[1] = 0;

    cout<<a[3]+a[4]+(a[2]+(a[1]+1)/2+1)/2;

    return 0;
}