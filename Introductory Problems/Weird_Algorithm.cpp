// CSES Problem Set
// Weird Algorithm

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin >> n;

    cout << n;
    while (n != 1)
    {
        // while n is even
        if (n % 2 == 0)
            n /= 2; // n is divided by 2

        // while n is odd
        else
            n = n * 3 + 1; // n multiplied by 3 and 1 is added with it

        cout << " " << n;
    }
}