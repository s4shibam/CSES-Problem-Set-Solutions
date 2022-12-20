// CSES
// Permutations

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    // for 3 -->  3 (1 2) --> Diff 1 --> No Solution
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    // Print only even numbers
    for (int i = 2; i <= n; i += 2)
    {
        cout << i << " ";
    }

    //  Then print only odd numbers
    for (int i = 1; i <= n; i += 2)
    {
        cout << i << " ";
    }

    // So... minimum difference between 2 adjacent numbers will be minimum 2 (1 will never come)
    return 0;
}