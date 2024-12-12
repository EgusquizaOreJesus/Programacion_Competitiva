#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[]) {
    ll n;
    cin >> n;
    
    ll temp = n-1;
    for (int i = 0; i < n; i++)
    {
        if(n < 4 && n > 1){
            cout << "NO SOLUTION"<< endl;
            break;
        }
        if (n == 1){
            cout << n << endl;
            break;
        }
        if (temp <= 0){
            temp = n;
        }
        cout << temp << " ";
        temp -= 2;
    }
    return 0;
}