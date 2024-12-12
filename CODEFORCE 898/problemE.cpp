#include <iostream>
#include "cmath"
#include "vector"
using namespace std;

typedef long long ll;

// calculando el maximo de agua con una altura establecida, luego comparo con la capacidad maxima de dato
// si supera la capacidad maxima es falso, y sino es verdadero

bool altura_max(ll height,int n,vector<int> a, ll water){
    ll total = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > height) continue;
        total += height - a[i];
//        cout <<"total: " <<total << endl;

    }
    return total <= water;
}
void result(){
    int n, water;
    cin >> n >> water;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }


    // Todas las posibles alturas
    ll start = 0;
    ll end = 2*pow(10,9);

    ll ans = 0;
    ll mid = INT_MAX;
    while (start <= end){
//        cout << "start: " << start << endl;
//        cout << "end: " << end << endl;
        mid = start + (end-start)/2;
//        cout << "mid: " << mid << endl;
        if (altura_max(mid,n,a,water)){
            ans = mid;
            start = mid +1;
        }else {
            end = mid - 1;
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--){
        result();
    }
    return 0;

}
