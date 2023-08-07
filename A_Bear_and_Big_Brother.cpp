#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a, b, c = 0;

    cin >> a >>b;

    while(true){
        
        a = a*3;
        b = b*2;
        c++;

        if (a > b)
        {
            break;
        }
        
    }

    cout << c;

    return 0;
}