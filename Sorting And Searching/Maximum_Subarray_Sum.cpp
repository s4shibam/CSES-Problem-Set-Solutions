// CSES
// Maximum Subarray Sum

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

    int maxVal = INT_MIN;
    long long sum = 0, maxSum = 0;
    for (int i = 0; i < n; i++)
    {

        int val;
        cin >> val;
        sum += val;

        // Handles array with all negative values
        maxVal = max(val, maxVal);

        // Whenever sum becomes negative, ignore that subarray
        // as it will minimize the result sum
        if (sum < 0)
            sum = 0;

        maxSum = max(sum, maxSum);
    }

    if (maxVal < 0)
        cout << maxVal;
    else
        cout << maxSum;

    return 0;
}