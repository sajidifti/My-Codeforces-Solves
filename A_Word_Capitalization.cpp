#include <bits/stdc++.h>
#include <iostream>

#include <algorithm>

using namespace std;

int main()
{
    string a;

    cin >> a;

    if (a[0] > 92)
    {
        a[0] -= 32;
    }

    cout << a;

    return 0;
}