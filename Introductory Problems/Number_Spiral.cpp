// CSES
// Number Spiral

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    while (n--)
    {
        ll x, y;
        cin >> y >> x;

        if (y == x)
            cout << ((x * x) - (x - 1)) << endl;
        else if (y > x)

            if (y % 2 == 0)
                cout << ((y * y - x) + 1) << endl;
            else
                cout << ((y - 1) * (y - 1) + x) << endl;

        else

            if (x % 2 == 0)
            cout << ((x - 1) * (x - 1) + y) << endl;
        else
            cout << ((x * x - y) + 1) << endl;
    }

    return 0;
}