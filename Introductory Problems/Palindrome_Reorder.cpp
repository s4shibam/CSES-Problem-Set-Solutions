// CSES
// Palindrome Reorder

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str;

    // To store the frequency of the letters
    int freq[26] = {0};

    for (auto ch : str)
    {
        freq[ch - 'A']++;
    }

    int check = 0;

    // To store the count if frequency of any letter is odd
    for (auto n : freq)
    {
        if (n & 1)
            check++;
    }

    // If count of letter with odd frequency is more than 1, then solution is not possible
    if (check > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    // Answer format --> Evenly frequent letters will be at left side and right side (in reverse)
    // And in the middle there will be oddly frequent letter
    vector<char> even, odd;

    for (int i = 0; i < 26; i++)
    {

        // Odd
        if (freq[i] & 1)
        {

            int x = freq[i];

            // Store
            while (x--)
            {
                odd.push_back(i + 'A');
            }
        }

        // Even
        else
        {

            // "/2" --> half will be at left and reversed half will be at right
            int x = freq[i] / 2;

            // Store
            while (x--)
            {

                even.push_back(i + 'A');
            }
        }
    }

    string ans = "";

    // Store the left half in ans string
    for (auto ch : even)
    {
        ans += ch;
    }

    // Store the middle (odd freq.) in ans string if present
    if (!odd.empty())
    {
        for (auto ch : odd)
        {
            ans += ch;
        }
    }

    // Store the right half in ans string
    reverse(even.begin(), even.end());
    for (auto ch : even)
    {
        ans += ch;
    }

    cout << ans;

    return 0;
}
