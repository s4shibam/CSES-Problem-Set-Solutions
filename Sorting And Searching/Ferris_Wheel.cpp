// CSES
// Ferris Wheel

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n, x;
    cin >> n >> x;

    vector<ll> child(n);

    for (ll i = 0; i < n; i++)
        cin >> child[i];

    sort(child.begin(), child.end());

    ll count = 0;
    ll i = 0, j = n - 1;

    while (i <= j)
    {

        if (i == j || child[i] + child[j] <= x)
            i++, j--;
        else
            j--;

        count++;
    }

    cout << count;
    return 0;
}
