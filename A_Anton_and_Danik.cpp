#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n, a = 0, d = 0;
    string s;

    cin >> n;

    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }

        if (s[i] == 'D')
        {
            d++;
        }
    }

    if (a == d)
    {
        cout << "Friendship";
    }
    else if (a > d)
    {
        cout << "Anton";
    }
    else if (a < d)
    {
        cout << "Danik";
    }


    return 0;
}