// CSES
// Trailing Zeros

/*
Explanation:

Trailing 0s in n! = Count of 5s in prime factors of n!
                  = floor(n/5) + floor(n/25) + floor(n/125) + ....

Whenever a 5 multiplies with 2, it results 10 which cause a trailing 0 in a factorial
As, count of 2s in prime factors of n! is way more than count of 5s.
So, only count of 5 is considerable.

So the result is the occurrence of 5s among the prime factors 0f n!

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;

    for (int i = 5; i <= n; i *= 5)
    {
        ans += (n / i);
    }

    cout << ans;

    return 0;
}