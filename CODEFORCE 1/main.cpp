#include <iostream>

using namespace std;
void solution(){
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a,b,c;
        cin >> a >> b >> c;
        if (a == b){
            cout << c << endl;
        }
        else if (a == c){
            cout << b << endl;
        }
        else if (b == c){
            cout << a << endl;
        }
    }
}



int main() {
    solution();
    return 0;
}
