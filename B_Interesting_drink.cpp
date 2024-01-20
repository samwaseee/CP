#include <bits/stdc++.h>
using namespace std;

int n, i, a[100005], q, x;

int main()
{
    for (cin >> n; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    cin >> q;
    
    for (i = 0; i < q; i++)
        {
            cin>>x;
            cout << upper_bound(a, a + n, x) - a << endl;
        }
}