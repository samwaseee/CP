#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, c;
    cin >> s;

    c = s.substr(1);
    char a = toupper(s[0]);
    cout << a << c;
}