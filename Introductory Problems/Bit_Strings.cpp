// CSES
// Bit Strings

/*
Explanation:

Binary number system has only 2 number (0,1).

To calculate the number of bit strings for given length n, where only 0 and 1 exist as digit.

Answer would be simply 2 to the power n.

*/
#include <bits/stdc++.h>
using namespace std;

#define m 1000000007

int main()
{
    int n;
    cin >> n;

    int ans = 1;
    int num = 2;

    // Calculates 2 to the power n
    while (n > 0)
    {

        if (n & 1)
        {
            // Modulo Operation
            ans = (1LL * ans * num) % m;
        }

        // Modulo Operation
        num = (1LL * num * num) % m;
        n >>= 1;
    }

    cout << ans;

    return 0;
}