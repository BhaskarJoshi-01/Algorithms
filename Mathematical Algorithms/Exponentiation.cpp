Your task is to efficiently calculate values ab modulo 109+7.

Input

The first input line contains an integer n: the number of calculations.

After this, there are n lines, each containing two integers a and b.

Output

Print each value ab modulo 109+7.

Constraints
1≤n≤2⋅105
0≤a,b≤109
Example

Input:
3
3 4
2 8
123 123

Output:
81
256
921450052



CODE:
#include <bits/stdc++.h>
#include <cstring>
#include <limits>
using namespace std;
#define ll long long int
#define lli long long int
#define fw(i, s, e) for (ll i = s; i < e; ++i)
#define fe(i, s, e) for (ll i = s; i <= e; ++i)
#define fb(i, e, s) for (ll i = e; i >= s; --i)
#define L(T)  \
    ll T;     \
    cin >> T; \
    while (T--)
#define FASTIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define mem(a, i) memset(a, i, sizeof(a))
#define ld long double
#define endl "\n"
#define in(P) \
    ll P;     \
    cin >> P;
#define mod 1000000007
long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = res * a;
            res %= mod;
        }
        a = a * a;
        a %= mod;
        b >>= 1;
    }
    return res;
}
int main()
{
    FASTIO
    L(T)
    {
        in(a);
        in(b);
        ll t = binpow(a, b);
        cout << t << endl;
    }
    return 0;
}
