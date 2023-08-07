#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n, count = 0;
    string m, prev = "None";

    cin >> n;  

    for (int i = 0; i < n; i++)
    {
        cin >> m;

        if (m != prev)
        {
            count++;
        }

        prev = m;
        
    }

    cout << count;
    

    return 0;
}