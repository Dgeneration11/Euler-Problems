#include <bits/stdc++.h>
#define ll long long
using namespace std;

set<ll> getFactor(ll n)
{
    set<ll> first_half;
    set<ll> second_half;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            first_half.insert(i);
            second_half.insert(n / i);
        }
    }
    /* cout << "first_half: ";
    for (auto i : first_half)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "second_half: ";
    for (auto i : second_half)
    {
        cout << i << " ";
    }
    cout << endl; */

    set<ll> ans(first_half);
    ans.insert(second_half.begin(), second_half.end());

    return ans;
}
void solve()
{
    int n;
    cin >> n;
    // getFactor(16);
    ll ans = 0;
    for (int i = 1, inc = 2;; i = i + inc, inc++)
    {
        if (getFactor(i).size() > n)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}