#include <iostream>
#include "cmath"
using namespace std;

void result(){
    int m,c;
    cin >> m >> c;
    if (m < (pow(2,c)-1)){
        cout << m + 1 << endl;
    }
    else{
        cout << int(pow(2,c)-1) + 1 << endl;
    }

}


int main() {
    int t;
    cin >> t;
    while (t--){
        result();
    }
    return 0;
}
