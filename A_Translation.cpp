#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, t;

    cin >> s;
    cin >> t;

    reverse(s.begin(), s.end());

    if (s.compare(t) == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}