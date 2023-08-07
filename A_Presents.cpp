#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n, p;
    cin >> n;
    int arr[n+1];

    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        arr[p] = i;
    }
    
    for (int i = 1; i < n+1; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}