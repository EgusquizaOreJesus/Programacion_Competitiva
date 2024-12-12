#include "iostream"

using namespace std;
typedef long long (ll);
void result(){
    ll n,x,y;
    cin >> n >> x >> y;
    ll resultado = 0;
    ll mayor = n;
    ll menor = 1;
    for (ll i = 1; i <= n/x; ++i) {
        if (i%x==0 && i%y==0){
        }
        if (i%x == 0 && i%y != 0){
            resultado += mayor;
            mayor--;
        }
        if (i%x != 0 && i%y == 0){
            resultado -= menor;
            menor++;
        }
    }
    cout << resultado << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        result();
    }

    return 0;
}