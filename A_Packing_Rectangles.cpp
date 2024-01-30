#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool trd(ll w, ll h, int n, int x)
{
    ll cnt = 0;
    ll n1 = x/h;
    ll n2 = x/w;

    cnt = n1*n2;

    return cnt >= n;
}

int main()
{
    ll w, h, n;
    cin >> w >> h >> n;

    ll l = 0, r = 1, m;

    while (trd(w, h, n, r) == false)
        r *= 2;

    while (l + 1 < r)
    {
        m = l + (r - 1) / 2;

        if (trd(w, h, n, m))
            r = m;
        else
            l = m;
    }

    cout << r;
}