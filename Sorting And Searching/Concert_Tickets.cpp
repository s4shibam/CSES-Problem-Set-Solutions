// CSES
// Concert Tickets

#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;

    multiset<int> tickets;
    vector<int> bids(m);

    // Sorts in ascending by default
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        tickets.insert(val);
    }

    for (int i = 0; i < m; i++)
    {
        int bid;
        cin >> bid;

        // Next high price (iterator) than maximum ticket price quoted
        auto it = tickets.upper_bound(bid);

        // If Next high price indicates the first index that means
        // quoted price is lesser than that which doesn't belong to input
        if (it == tickets.begin())
            cout << -1 << '\n';
        else
        {
            // Maximum payable price
            --it;
            cout << *it << '\n';
            tickets.erase(it);
        }
    }

    return 0;
}