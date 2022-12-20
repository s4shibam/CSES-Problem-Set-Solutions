// CSES
// Two Knights

/*
Explanation:

Point:
If 2x3 or 3x2 box is made in a board, there will be only 2 unique ways for two knights
to be placed in such a manner so they can attack each other (on the opposite corners).
So, rest are non-attacking positions.

Now,
The formula basically counts the number of 3x2 (3 rows, 2 columns) boxes in a "k x k" board.
The number of such boxes that fit along the horizontal edge is (k - 1) and
then along the vertical edge is (k - 2).
So by multiplying (k - 1) and (k - 2) all possible combinations are calculated for 3x2 boxes.

Moreover, the box can be oriented as a 2x3 box, and same result will obtain.
Vertically (k - 1) and horizontally (k - 2).
So the previous result is multiplied by 2.

--> [2 * (k - 1) * (k - 2)]

And then as per key point, inside any 2x3 or 3x2 box there are only 2 unique ways
for two knights to be placed so they may attack each other (on the opposite corners).
So again multiplied by 2.

So count the ways for any two knights can be placed on the chessboard and
then subtract the obtained formula [4 * (k - 1) * (k - 2)]
to get desired output.

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll n;
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        ll ksq = k * k;

        // "/2" ignores the scenario where knights are in the same positions but switched
        // Let, all these positions are unattackable
        ll notAttack = ksq * (ksq - 1) / 2;

        if (k >= 3)
        {
            ll attack = 4 * (k - 1) * (k - 2);
            notAttack -= attack;
        }

        cout << notAttack << '\n';
    }

    return 0;
}