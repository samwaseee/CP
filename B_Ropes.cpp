#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int n ,k;
vi a;

bool ok(double x)
{
    
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt+= a[i] / x;
    }
    
    return cnt >= k;
    
}

int main()
{
    cin>>n>>k;

    a = vi(n);

   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
   }

   double l = 0,r = 1e8;

   while(ok(r)) r*=2;

   //cout<<r;

   for (int i = 0; i < 100; i++)
   {
    double m = (l+r) / 2;
    //cout<<m<<" ";

    if(ok(m)) l = m;
    else r = m;
   }

   cout<<setprecision(15)<<fixed<<l; 
}