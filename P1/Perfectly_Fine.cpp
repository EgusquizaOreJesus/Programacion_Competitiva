#include "bits/stdc++.h"

using namespace std;


void solve(){
    bool h1 = false;
    bool h2 = false;
    int n;
    cin >> n;
    int min1 = int(2*pow(10,5));
    int min2 = int(2*pow(10,5));
    int min_ambas = int(2*pow(10,5));
    for (int i = 0; i < n; ++i) {
        int t;
        string binario;
        cin >> t >> binario;
        if (binario[0]=='1' and binario[1] == '1' and t<min_ambas){
            min_ambas = t;
            h1 = true;
            h2 = true;
        }
        else if (binario[0]=='1' and binario[1] == '1'){
            h1 = true;
            h2 = true;
        }
        if (binario[0] == '1' and t < min1){
            min1 = t;
            h1 = true;
        }
        else if (binario[0] == '1'){
            h1 = true;
        }
        if (binario[1] == '1' and t < min2){
            min2 = t;
            h2 = true;
        }
        else if (binario[1] == '1'){
            h2 = true;
        }
    }
    if (h1 and h2){
        if ((min1 + min2) < min_ambas)
        cout << min1 + min2 << endl;
        else{
            cout << min_ambas << endl;
        }
    }
    else{
        cout << -1 << endl;
    }
    
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}

/*
CODIGO MAS OPTIMO
 int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int32_t num_tests;
    std::cin >> num_tests;

    for(int32_t t = 0; t < num_tests; t++) {
        int32_t n;
        std::cin >> n;

        int32_t ans = INT32_MAX;
        int32_t ans1 = INT32_MAX, ans2 = INT32_MAX;
        for(int32_t i = 0; i < n; i++) {
            int32_t x;
            std::string status;
            std::cin >> x >> status;

            if(status == "11")
                ans = std::min(ans, x);
            if(status[0] == '1')
                ans1 = std::min(ans1, x);
            if(status[1] == '1')
                ans2 = std::min(ans2, x);
        }
        if(ans1 != INT32_MAX && ans2 != INT32_MAX)
            ans = std::min(ans, ans1 + ans2);

        if(ans != INT32_MAX)
            std::cout << ans << "\n";
        else
            std::cout << -1 << "\n";
    }
    return 0;
}
 */