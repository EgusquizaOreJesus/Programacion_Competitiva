#include <bits/stdc++.h>

using namespace std;

void result(){
    int n,k;
    cin >> n >> k;
    bool vali = false;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a == k){
            vali = true;
        }
    }
    if (vali){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}

int main(){
    int t;
    cin >> t;
    while (t--){
        result();
    }

    return 0;
}