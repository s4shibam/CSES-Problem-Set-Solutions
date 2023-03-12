// CSES
// Gray Code

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // For n = 1
    vector<string> gray = {"0", "1"};

    int i = 1;
    while (i < n)
    {

        // Reverse current vector and append that with it
        vector<string> rev = gray;
        reverse(rev.begin(), rev.end());
        for (auto r : rev)
            gray.push_back(r);

        int j = 0;
        int sz = gray.size();

        // Append half of the vector with 0
        while (j < sz / 2)
        {

            gray[j] = "0" + gray[j];
            j++;
        }

        // Append half of the vector with 1
        while (j < sz)
        {

            gray[j] = "1" + gray[j];
            j++;
        }
        i++;
    }

    for (auto g : gray)
        cout << g << '\n';

    return 0;
}