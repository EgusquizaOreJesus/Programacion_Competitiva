#include <bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;
void result(vector<ll> arr){

    ll min = 0;
    for (size_t i = 1; i < arr.size(); i++)
    {
        if(arr[i-1]  > arr[i]){
            ll movimientos = arr[i-1] - arr[i];
            min += movimientos;
            arr[i] += movimientos;
        }
    }
    cout << min << endl;
}

int main(int argc, char const *argv[]) {
    ll n;
    cin >> n;

    vector<ll> array;
    for (size_t i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        array.push_back(num);
    }
    result(array);
    

    return 0;
}
