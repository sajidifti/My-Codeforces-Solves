#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n, count = 0, a;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        if (a == 1)
        {
            count++;
        }
        
    }

    if (count == 0)
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
    

    return 0;
}