// CSES
// Stick Lengths

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

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    // Median value
    int avg = arr[n / 2];

    long long cost = 0;
    for (auto it : arr)
        cost += abs(avg - it);

    cout << cost;
    return 0;
}