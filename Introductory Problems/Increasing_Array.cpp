// CSES
// Increasing Array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    long int x;
    long int mx = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mx = max(mx, x); // Select the max between current number and previous number
        ans += mx - x;   // store the difference value between max number and current input
    }
    cout << ans;
    return 0;
}