#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[]) {
    ll n;
    cin >> n;
    if(n == 1){
        printf("%d",n);
    }else if (n < 4){
        cout << "NO SOLUTION" << endl;
    }else{
        for (int i = n-1; i >= 1; i -= 2)
        {
            printf("%d ",i);
            //cout << i << " ";
        }
        for (int i = n; i >= 1; i -= 2){
            printf("%d ",i);
            //cout << i << " ";
        }    
    }
    return 0;
}