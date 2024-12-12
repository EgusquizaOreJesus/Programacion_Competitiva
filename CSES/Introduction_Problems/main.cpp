#include <iostream>

using namespace std;
using ll = long long;

void result(ll n){
    while (n != 1){
        cout << n << " ";
        // si n es impar
        if (n% 2 != 0){
            n *= 3;
            n += 1;
        }else{
            n  /= 2;
        }
    }
    cout << n;

}
// 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
int main() {
    ll n;
    cin >> n;
    result(n);
    return 0;
}
