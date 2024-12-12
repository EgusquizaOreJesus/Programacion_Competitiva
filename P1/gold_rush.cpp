#include "bits/stdc++.h"
//
//using namespace std;
//
//void solve(){
//    int t,s;
//    cin >> t >> s;
//    if (t<s){
//        cout << "NO" << endl;
//    }
//    else if (t==s){
//        cout << "YES" << endl;
//    }
//    else{
//        bool encontrado = false;
//        stack<int> num;
//        num.push(t);
//        while (!num.empty()){
//            if (t<s){
//                break;
//            }
//            if (t%3 == 0){
//                num.pop();
//                int t1 = t/3;
//                int t2 = 2*t1;
//                if (t1 == s or t2 == s){
//                    encontrado = true;
//                }else{
//                    num.push(t1);
//                    num.push(t2);
//                    t = num.top();
//                }
//
//            }
//            else{
//                num.pop();
//                if (!num.empty()){
//                    t = num.top();
//                }
//            }
//        }
//        if (encontrado){
//            cout << "YES" << endl;
//        }
//        else{
//            cout << "NO" << endl;
//        }
//    }
//}
//
//int main(){
//    int t;
//    cin >> t;
//    for (int i = 0; i < t; ++i) {
//        solve();
//    }
//
//
//    return 0;
//}

using namespace std;

bool ok(int n, int m) {
    if (n == m) {return true;}
    else if (n % 3 != 0) {return false;}
    else {return (ok(n / 3, m) || ok(2 * n / 3, m));}
}

void solve() {
    int n, m;
    cin >> n >> m;
    cout << (ok(n, m) ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
}
