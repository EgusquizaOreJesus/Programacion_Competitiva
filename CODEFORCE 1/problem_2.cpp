#include <iostream>
#include "vector"
#include "string"
using namespace std;
void solution(){
    vector<char> sol = {'A','B','C','C','A','B','B','C','A'};
    for (int i = 0; i < 3; ++i) {
        char a,b,c;
        cin >> a >> b >> c;
        for (int j = 0; j < 3; ++j) {
            if (a == '?'){

                cout << i << " " << "0" << endl;
                cout << sol[(3*i) + (3-(3-0))] << endl;
                break;
            }
            else if (b == '?'){
                cout << i << " " << "1" << endl;
                cout << sol[(3*i) + (3-(3-1))] << endl;
                break;
            }
            else if (c == '?'){
                cout << i << " " << "2" << endl;
                cout << sol[(3*i) + (3-(3-2))] << endl;
                break;
            }
        }
    }
}



int main() {
    int t;
    cin >> t;
    for (int i = 0; i <t; ++i) {
        solution();
    }
    return 0;
}
