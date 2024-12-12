#include <iostream>
#include "vector"

using namespace std;
void result2(vector<string>& container){
    int n, a ,q;
    string contain;
    cin >> n >> a >> q;
    cin >> contain;

    bool yes = false;
    if (a == n){
        container.emplace_back("YES");
    }
    else{
        int pos = 0;
        int neg = 0;
        int val = a;
        for (char i : contain) {
            if (i == '+'){
                pos++;
                val += 1;
            }
            else{
                neg--;
                val -= 1;
            }
            if (val == n){
                container.emplace_back("YES");
                yes = true;
                break;
            }
        }
        if (!yes){
            if (pos + a >= n){
                container.emplace_back("MAYBE");
            }
            else{
                container.emplace_back("NO");

            }
        }
    }


}

int main() {
    int t;
    cin >> t;
    vector<string> container;
    while (t--){
        result2(container);
    }
    for_each(container.begin(),container.end(),[](string& a){cout << a << endl;});
    return 0;
}
