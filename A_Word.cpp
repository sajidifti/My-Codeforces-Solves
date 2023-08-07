#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int l = 0, u = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] > 92)
        {
            l++;
        }

        if (s[i] < 92)
        {
            u++;
        }
    }

    if (l == u)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] < 92)
            {
                s[i] = s[i] + 32;
            }
        }
    }
    else if (l > u)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] < 92)
            {
                s[i] = s[i] + 32;
            }
        }
    }
    else if (l < u)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] > 92)
            {
                s[i] = s[i] - 32;
            }
        }
    }

    cout << s;

    return 0;
}