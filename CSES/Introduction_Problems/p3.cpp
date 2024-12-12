#include <iostream>
#include <string>

using namespace std;
using ll = long long;

void result(const string& n){

    ll freq = 1;
    ll max = 0;
    for (std::size_t i = 0; i < n.size(); ++i) {
        if (n[i] != n[i+1]){
            if (max < freq){
                max = freq;
            }
            freq = 0;
        }
        freq++;
    }
    cout << max;
}

int main(){
    string n;
    cin >> n;
    result(n);

    return 0;
}
