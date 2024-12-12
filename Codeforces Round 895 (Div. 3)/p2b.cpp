#include "iostream"
#include "cmath"
using namespace std;

void result(){
    int n;  // cantidad de trampas
    cin >> n;
    int k = INT_MAX;
    for (int i = 0; i < n; ++i) {
        int di,si;
        cin >> di >> si;
        int ki = di + int(ceil(double(si)/2)) - 1;
        if (ki < k){
            k = ki;
        }
    }
    cout << k << endl;
}




int main(){
    int t;
    cin >> t;
    while (t--){
        result();
    }

    return 0;
}