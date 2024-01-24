// CSES
// Sum of Two Values
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int n, sum;
    cin >> n >> sum;
 
    vector<int> arr(n);
    for (auto &a : arr)
        cin >> a;
 
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.count(sum - arr[i]))
        {
            cout << mp[sum - arr[i]] << " " << i + 1;
            return 0;
        }
        else
            mp[arr[i]] = i + 1;
    }
    cout << "IMPOSSIBLE";
 
    return 0;
}