#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, c = 0;
    string s;

    cin >> n >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i+1])
        {
            c++;
        }
        
    }
    
    cout << (s.size() - c);

    return 0;
}