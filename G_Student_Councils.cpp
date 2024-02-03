#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int n ,k;
vll a;

bool ok(ll x)
{
    
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cnt+= min(x,a[i]);
    }

    ll t = k*x;

    return cnt >= t;
    
}

int main()
{
    cin>>k>>n;

    a = vll(n);

   for(auto &i : a) cin>>i;

   ll l = 0,r = 1;

   while(ok(r)) r*=2;

   //cout<<r;

   while(l+1 < r)
   {
    ll m = (l+r) / 2;
    //cout<<m<<" ";

    if(ok(m)) l = m;
    else r = m;
   }

   ok(r) ? cout<<r : cout<<l;
 
}