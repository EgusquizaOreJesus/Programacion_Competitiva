#include "iostream"

using namespace std;

void result(){
    int x,y,n;
    cin >> x >> y >> n;
    int t = ((n-1)*(n))/2;
    int k = (y-x)/t;
    if (k == 0){
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i < n; ++i) {
        cout << x << " ";
        x = x + k*(n-i);
    }
    cout << y << endl;
}



int main(){
    int t;
    cin >> t;
    while (t--){
        result();
    }

    return 0;
}