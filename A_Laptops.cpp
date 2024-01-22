#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y, a;
    bool z = 0;
    cin >> n;
    for (a = 0; a < n; a++)
    {
        cin >> x >> y;
        if (x != y)
            z = 1;
    }
    cout << (z ? "Happy Alex" : "Poor Alex");
}