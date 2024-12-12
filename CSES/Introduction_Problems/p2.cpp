#include <iostream>

using namespace std;
using ll = long long;

void result(ll n){
    ll total = n*(n+1)/2;
    ll sum_total = 0;
    for (int i = 0; i < n-1; ++i) {
        ll num;
        cin >> num;
        sum_total += num;
    }
    cout << total - sum_total;
}

int main(){
    ll n;
    cin >> n;
    result(n);


    return 0;
}