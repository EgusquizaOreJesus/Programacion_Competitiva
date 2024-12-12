#include "bits/stdc++.h"

using namespace std;
void solve(){
    int n,d;
    cin >> n >> d;
    string s;
    cin >> s;
    for (int j = 0; j < n; ++j) {
        if ((s[j] - '0') >= d){
            cout << s[j] - '0';
        }
        else{
            cout << d;
            for (int i = j; i < n; ++i) {
                cout << s[i]-'0';
            }
            cout << endl;
            return;
        }
    }
    cout << d << endl;
}



int main(){
    int total;
    cin >>total;
    for (int i = 0; i < total; ++i) {
        solve();
    }
    return 0;
}