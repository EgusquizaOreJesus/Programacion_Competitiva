#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void result(){
    char t;
    int countA = 0,countB = 0,countC = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> t;
        if(t == 'A'){
            countA++;
        }else if (t == 'B'){
            countB++;
        }else if (t == 'C'){
            countC++;
        }
    }
    if(countA == 2){
        cout << 'A' << endl;
    }
    else if(countB == 2){
        cout << 'B' << endl;
    }
    else if(countC == 2){
        cout << 'C' << endl;
    }
}

int main(int argc, char const *argv[]) {
    int t;
    cin >> t;
    while (t--){
        result();
    }
}
