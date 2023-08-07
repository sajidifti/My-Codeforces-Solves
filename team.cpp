#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m[3], count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> m[j];
        }
        if (m[0] == 1 && m[1] == 1)
        {
            count++;
        }
        else if (m[0] == 1 && m[2] == 1)
        {
            count++;
        }
        else if (m[1] == 1 && m[2] == 1)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}