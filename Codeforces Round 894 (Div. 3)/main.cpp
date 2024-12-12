#include <iostream>

using namespace std;

void result(){
    int t , n;
    cin >> t >> n;
    string palabra;
    int at = 0;
    int next = 0;
    int j = 0;
    string palabra2 = "vika";
    for (int w = 0; w < t; ++w) {
        cin >> palabra;
        for (int i = 0; i < n; ++i) {
            if (palabra[i] == palabra2[j]) {
                at = i;
                j++;
            }
        }

    }
    for(int i = 3; i <= n; ++i){
        for(int j = 0; j < i; ++ j){
            bst[i] += bst[j]*bst[(i-1)-j];
        }
    }
    cout << at << endl;
}
int numTrees(int n) {
    int* bst = new int[n+1];
    for (int i =3; i <= n; ++i) {
        bst[i] = 0;
    }

    bst[0] = 1;
    bst[1] = 1;
    bst[2] = 2;
    for(int i = 3; i <= n; ++i){
        for(int j = 0; j < i; ++ j){
            bst[i] += bst[j]*bst[(i-1)-j];
        }
    }
    return bst[n];
}

class Solution {
public:
    bool isSubsequence(string s, string t) {
        for (auto a:t) {
            if (a)
        }
    }
};
// 1873D 1D ERASER
int main() {
    cout << numTrees(3);
    return 0;
}
