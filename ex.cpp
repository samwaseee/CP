#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

bool prd(ll w, ll h, ll n, ll x)
{
    ll cnt = 0;
    
    ll nm1 = (x / w);
    ll nm2 = (x / h);

    cnt = nm1 * nm2;

    return cnt >= n;
}

int main()
{
    ll w, h, n;
    cin >> w >> h >> n;

    ll l = 0, r = 1, mid;
    
    while (prd(w, h, n, r) == false)
        r *= 2;

    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;

        if (prd(w, h, n, mid))
            r = mid;
        else
            l = mid;
    }
    cout << r;

    return 0;
}

