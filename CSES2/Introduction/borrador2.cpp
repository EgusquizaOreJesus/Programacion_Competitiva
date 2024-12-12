#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void result(){
    deque<pair<int,int>> arr;
    int t,saludos = 0;
    cin >> t;
    int a,b;
    cin >> a >> b;
    arr.push_back({a,b});
    t--;
    std::deque<pair<int,int>>::iterator it = arr.end() - 1;
    while (t--)
    {
        cin >> a >> b;
        if(a > (*it).first){
            arr.push_back({a,b});
        }else{
            arr.push_front({a,b});
        }
        it = arr.end()-1;
    
    }
    for(int i = 0; i < arr.size(); i++){
        for (int j = i+1; j < arr.size(); j++)
        {
            if(arr[i].second > arr[j].second) saludos++;
        }
    }
    cout << saludos << endl;
}

int main(int argc, char const *argv[]) {
    result();
}
