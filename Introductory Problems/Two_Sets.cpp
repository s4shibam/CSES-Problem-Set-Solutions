// CSES
// Two Sets

#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Print
void printVector(vector<ll> v)
{
    cout << v.size() << "\n";
    for (ll i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

// For Remainder 0
void solve0(ll n)
{
    vector<ll> v1, v2;

    for (ll i = 0; i < n / 4; i++)
    {

        v1.push_back(4 * i + 1);
        v1.push_back(4 * i + 4);

        v2.push_back(4 * i + 2);
        v2.push_back(4 * i + 3);
    }

    // Print Set 1
    printVector(v1);
    cout << '\n';

    // Print Set 2
    printVector(v2);
}

// For Remainder 3
void solve3(ll n)
{
    vector<ll> v1, v2;

    v1.push_back(1);
    v1.push_back(2);

    v2.push_back(3);

    for (ll i = 1; i <= n / 4; i++)
    {

        v1.push_back(4 * i);
        v1.push_back(4 * i + 3);

        v2.push_back(4 * i + 1);
        v2.push_back(4 * i + 2);
    }

    // printVector Set 1
    printVector(v1);
    cout << '\n';

    // printVector Set 2
    printVector(v2);
}

int main()
{

    ll n;
    cin >> n;

    if (n % 4 == 0)
    {
        cout << "YES\n";
        solve0(n);
    }
    else if (n % 4 == 3)
    {
        cout << "YES\n";
        solve3(n);
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
