#include "iostream"
#include "cmath"
using namespace std;

void result(){
    int l, r;
    cin >> l >> r;
    for (int a = l; a <= r; ++a) {
        for (int b = 2;  b <= sqrt(a); ++b) {
            if (a%b == 0){
                cout << a-b << " " << b << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        result();
    }
    return 0;
}