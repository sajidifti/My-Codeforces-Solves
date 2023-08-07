#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char beautifulYear(string year)
{
    int count = 0;

    for (int i = 0; i < year.size(); i++)
    {
        for (int j = 0; j < year.size(); j++)
        {
            if (year[i] == year[j])
            {
                count++;
            }
        }
    }

    if (count == 4)
    {
        return 'Y';
    }

    return 'N';
};

int main()
{
    int y;
    cin >> y;
    y = y + 1;

    while (true)
    {
        string year = to_string(y);
        char result = beautifulYear(year);

        if (result == 'Y')
        {
            cout << year;
            break;
        }
        y++;
    }

    return 0;
}