// CSES
// Repetitions

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string dna;
    cin >> dna;

    char target = 'A';
    int count = 0, ans = 1;

    for (char point : dna) // For each loop
    {
        // Particular index of the string matched with character
        if (point == target)
        {
            ++count;
            ans = max(ans, count); // Take the max value
        }
        else
        {
            target = point; // Current index will be allocated as target
            count = 1;
        }
    }
    cout << ans;

    return 0;
}