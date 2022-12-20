// CSES
// Missing Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n, sum = 0;

    cin >> n;
    long int numbers[n - 2]; // Declaring array size

    for (int i = 0; i <= n - 2; i++)
    {
        cin >> numbers[i]; // Array input
        sum += numbers[i]; // Sum of given numbers
    }

    cout << (n * (n + 1) / 2) - sum; // calculated sum subtracted from Sum of 1 to n integers
}