#include "bits/stdc++.h"

using namespace std;
void solve(){
    string palabra = "codeforces";
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < 10; ++i) {
        if (palabra[i] != s[i]){
            count++;
        }
    }
    cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}