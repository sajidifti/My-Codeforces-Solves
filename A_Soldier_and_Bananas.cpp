#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    int k, n, w, cost = 0;

    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        cost = cost + i*k;
    }
    
    int result = cost - n;

    if (result < 0)
    {
        result = 0;
    }
    

    cout << result;
    
    return 0;
}