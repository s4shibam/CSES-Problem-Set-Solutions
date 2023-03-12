// CSES
// Apartments

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> desire(n), available(m);

    for (ll i = 0; i < n; i++)
        cin >> desire[i];

    for (ll i = 0; i < m; i++)
        cin >> available[i];

    sort(desire.begin(), desire.end());
    sort(available.begin(), available.end());

    ll count = 0;
    ll i = 0, j = 0;
    while (i < desire.size() && j < available.size())
    {
        ll low = desire[i] - k;
        ll high = desire[i] + k;

        if (low <= available[j] && available[j] <= high)
            count++, i++, j++;
        else if (high > available[j])
            j++;
        else
            i++;
    }

    cout << count;
    return 0;
}