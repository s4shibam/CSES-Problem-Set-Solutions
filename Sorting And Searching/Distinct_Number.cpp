// CSES
// Distinct Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> st;

    // Store only unique values
    while (n--)
    {
        int val;
        cin >> val;

        st.insert(val);
    }

    cout << st.size();

    return 0;
}