#include "bits/stdc++.h"

using namespace std;

void solve(){
    int t;  //tamaño
    cin >> t;
    string result;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        result += to_string(n);
    }
    int max = 0;
    int count = 0;
    for (int i = 0; i < t; ++i) {
        if (result[i]=='0'){
            count++;
        }
        else if (result[i]!='0' and count > max){
            max = count;
            count = 0;
        }
        else if(result[i] != '0'){
            count = 0;
        }
    }
    if (count > max){
        max = count;
    }
    cout << max << endl;
}

int main(){
    int t;
    cin >>t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}