#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define ll long long
#define pi 3.141592653589793
#define pb push_back
const int N = 1000005;
const ll M=1e6+5;
const ll mxn =1e18;
const int mod = 1000000007;
#define FAST  ios::sync_with_stdio(false);cin.tie(0);
#define FF fflush(stdout);
#define lcm(a,b) (a*b)/__gcd(a,b)
#define F first
#define S second
#define mp make_pair
set<ll>::iterator it,itt;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<ll,ll>, null_type,less<pair<ll,ll> >, rb_tree_tag,tree_order_statistics_node_update>
int main()
{
        FAST
       int tc=1,cs=0;
       cin >> tc;
       while(tc--)
       {
           int n,i;
           cin >> n;
           vector<int>a(n),b(n);
           for(int &x : a)cin >> x;
           for(int &x : b)cin >> x;
           auto chek = [&](int ans)
           {
               map<int,int>cnt;
               for(int x : a)++cnt[ x&ans];
               for(int x : b)--cnt[~x & ans];
               bool ok = true;
               for(auto it : cnt )ok &= it.second == 0;
               return ok;
           };

           int ans=0;
           for(int bit=29;bit>=0;--bit)
           {
               if(chek(ans | (1<<bit)))
                ans |= 1<<bit;
           }
           cout << ans << endl;
       }
}
