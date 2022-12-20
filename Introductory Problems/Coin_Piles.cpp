// CSES
// Coin Piles

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b;
        cin >> a >> b;

        // a must be larger
        if (b > a)
            swap(a, b);

        // While picking 1 from a pile, 2 should be picked up from another
        // Maximally, larger number should be lesser than double of another number
        if ((a > 2 * b) || ((a + b) % 3 != 0))
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}