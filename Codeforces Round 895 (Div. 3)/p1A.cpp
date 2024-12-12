#include "iostream"
#include "cmath"
using namespace std;

void result(){
    int a,b,c;
    cin >> a >> b >> c;
    int x = abs(b-a);
    double t = double(x)/2;
    cout << ceil(t/c) << endl;
}




int main(){
    int t;
    cin >> t;
    while (t--){
        result();
    }
    return 0;
}