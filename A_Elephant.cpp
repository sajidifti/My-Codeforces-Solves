#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, step;

    cin >> x;

    step = x / 5;

    if (x % 5 > 0)
    {
        step++;
    }

    cout << step;
    
    return 0;
}