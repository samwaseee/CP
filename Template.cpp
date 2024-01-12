#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(),x.end()
#define rfor(i,x,n) for(ll i=n;i>x;i--)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define c0 cout<<"0"
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)

typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;



void uniq(vector<int> Vv){
    sort(Vv.begin(),Vv.end());
    Vv.erase(unique(Vv.begin(),Vv.end()),Vv.end());
}

void lower(string& str){ for (int i = 0; i < str.length(); i++) { if (isupper(str[i]))   str[i] = tolower(str[i]);   }}

void upper(string& str){ for (int i = 0; i < str.length(); i++) { if (islower(str[i]))   str[i] = toupper(str[i]); }}

void toggle(string& str){ int length = str.length();
    for (int i = 0; i < length; i++) {int c = str[i]; if (islower(c))       str[i] = toupper(c);
                                                      else if (isupper(c))  str[i] = tolower(c);       }}
 
/*for(auto x:v)
     cout<<x<<" ";
    
    cout << count(v.begin(), v.end(), x);             //occurance of x
      
    find(v.begin(), v.end(),x) != v.end()?
                         cout << "\nElement found":
                     cout << "\nElement not found";      
    
    vect.erase(find(vect.begin(),vect.end(),x));*/

int binarySearch(vi arr, int l, int r, int x,int y)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] >= x && arr[m] <=y)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    return -1;
}

struct point_i{
    int x,y;                                       //wheneverpossible,workwithpoint_i 
    point_i()
    {
        x=y=0;
    }                                            //defaultconstructor 
    point_i(int _x,int _y) : x(_x), y(_y) {}
    };                                              //user-defined

intinsideCircle(point_i p,point_i c,int r){
    int dx=p.x-c.x, dy=p.y-c.y; 
    int Euc=dx*dx+dy*dy, rSq=r*r;                             //allinteger 
    return Euc<rSq ? 0 : Euc==rSq ? 1 : 2;
}                                                           //inside/border/outside

void solve()
{
    
}





int main() {
    int t=1;
    //cin>>t;

    while(t--)
    {
        solve();
        //cout<<endl; //https://docs.google.com/spreadsheets/d/1HH4jagU6jC4so7TiKR6ayI4GxcNq7jJLb8D8fojx1Xs/edit?usp=drivesdk
    }


    return 0;
}