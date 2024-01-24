// CSES
// Missing Coin Sum

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
    for (auto &a : arr)
        cin >> a;

    sort(arr.begin(), arr.end());

    if (arr[0] > 1)
    {
        cout << 1;
        return 0;
    }

    long long total = 0;
    for (int i = 0; i < n - 1; i++)
    {

        total += arr[i];
        if (arr[i + 1] > total + 1)
        {
            cout << total + 1;
            return 0;
        }
    }

    cout << total + arr[n - 1] + 1;

    return 0;
}