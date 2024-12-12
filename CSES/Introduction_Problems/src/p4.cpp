#include "iostream"

using namespace std;

using ll = long long;
// PROBLEMA ESPIRAL
void result(){
    ll x,y;
    cin >> x >> y;
    if (x%2 != 0 && x >= y){
        cout << (x-1)*(x-1) + y << endl;
    }
    else if (x%2 == 0 && x > y){
        cout << x*x - (y-1) << endl;
    }
    else if (y%2 != 0 && y > x){
        cout << y*y - (x-1) << endl;
    }
    else if (y%2 == 0 && y >= x){
        cout << (y-1)*(y-1) + x << endl;
    }
}

int main(){
    ll t;
    cin >> t;
    while (t--){
        result();
    }
    return 0;
}