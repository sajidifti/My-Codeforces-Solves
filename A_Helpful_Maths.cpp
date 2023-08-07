#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    string s;

    cin >> s;

    int arr[100], j = 0, k =0;

    for (int i = 0; i < s.size(); i+=2)
    {
        arr[j] = int(s[i]);
        j++;
    }
    
    sort(arr, arr+j);

    for (int i = 0; i < j; i++)
    {
        s[k] = arr[i];
        k+=2;
    }

    cout << s;

    return 0;
}