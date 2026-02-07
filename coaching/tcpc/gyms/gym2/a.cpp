#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc = 1;
    // cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int op1 = 0, op11 = 0, op12 = 0, op2 = 0, op21 = 0, op22 = 0;
        string mti = "mti", mit = "mit";
        for (int i = 0; i < n; i++)
        {
            op1 += (s[i] != mti[i % 3]);
            op11 += (s[i] != mti[(i % 3 + 1) % 3]);
            op12 += (s[i] != mti[(i % 3 + 2) % 3]);

            op2 += (s[i] != mit[i % 3]);
            op21 += (s[i] != mit[(i % 3 + 1) % 3]);
            op22 += (s[i] != mit[(i % 3 + 2) % 3]);
        }
        op1 = min({op1, op12, op11});
        op2 = min({op2, op21, op22});
        if (op1 == op2)
            cout << "FAKE\n";
        else    
        {
            if (min(op1, op2) == op1)
                cout << "mti " << min(op1, op2);
            else
                cout << "mit " << min(op1, op2);
            cout << endl;
        }
    }
}