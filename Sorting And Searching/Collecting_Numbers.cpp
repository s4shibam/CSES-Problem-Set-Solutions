// CSES
// Collecting Numbers

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

    vector<int> arr(n), indexes(n);

    for (int i = 0; i < n; i++)
        // Converted into 0 based indexing
        cin >> arr[i], indexes[--arr[i]] = i;

    for (int i = 0; i < n; i++)
        cout << indexes[i] + 1<< " ";
    cout << endl;

    int rounds = 1;
    for (int i = 1; i < n; i++)
        // Higher value containing index appeared before
        // lower value containing index
        if (indexes[i - 1] > indexes[i])
            rounds++;

    cout << rounds;

    return 0;
}
