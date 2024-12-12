#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[]) {
    ll n,x,ans = 0;
    cin >> n;
    cin >> x;
    for (size_t i = 1; i < n; i++)
    {   
        ll temp;
        cin >> temp;
        if(x > temp){
            ans += (x-temp);
            temp += (x - temp);
        }
        x = temp;
    }
    cout << ans << endl;
    return 0;
}