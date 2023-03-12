// CSES
// Restaurant Customers

#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    map<int, int> mp;
    int sum = 0, count = -1;

    for (int i = 0; i < n; i++)
    {

        int x, y;
        cin >> x >> y;

        // Mark arrival time with +1 and departure time with -1
        mp[x]++, mp[y]--;
    }

    for (auto it : mp)
    {
        sum += it.second;

        // Maximum customer customer available in a particular time
        count = max(count, sum);
    }

    cout << count;

    return 0;
}