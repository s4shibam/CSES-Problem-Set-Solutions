// CSES
// Movie Festival

#include <bits/stdc++.h>
using namespace std;

bool comparator(const pair<int, int> &p1, const pair<int, int> &p2)
{

    return p1.second < p2.second;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);

    for (auto &a : arr)
        cin >> a.first >> a.second;

    // Sort movie times with respect to ending times
    sort(arr.begin(), arr.end(), comparator);

    int movies = 0, end = -1;
    for (auto a : arr)
    {

        // If current movie starts after the end of previous movie
        if (a.first >= end)
        {
            movies++;
            end = a.second;
        }
    }

    cout << movies;

    return 0;
}