#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int MAX = 100000;
        vector<int> win(MAX,0);
        vector<int> loss(MAX,0);
        for(auto match: matches){
            win[match[0]]++;        // contando las veces que gana cada jugador
            loss[match[1]]++;       // contando las veces que pierde cada jugador
        }
        vector<int> no_loss;        // jugadores que no perdieron ninguna partida
        vector<int> one_loss;       // jugadores que perdieron solamente una partida
        for(int player = 0; player < MAX; player++){
            if(win[player] + loss[player] > 0){
                if (loss[player] == 0){
                    no_loss.push_back(player);
                }
                else if (loss[player] == 1){
                    one_loss.push_back(player);
                }
            }
        }
        vector<vector<int>> result = {no_loss,one_loss};
        return result;
    }
};
int main() {

    vector<vector<int>> result;
    vector<int> temp1 = {1,3};
    vector<int> temp2 = {2,3};
    vector<int> temp3 = {3,6};
    vector<int> temp4 = {5,6};
    vector<int> temp5 = {5,7};
    vector<int> temp6 = {4,5};
    vector<int> temp7 = {4,8};
    vector<int> temp8 = {4,9};
    vector<int> temp9 = {10,4};
    vector<int> temp10 = {10,9};
    result.push_back(temp10);
    result.push_back(temp3);
    result.push_back(temp4);
    result.push_back(temp5);
    result.push_back(temp1);
    result.push_back(temp6);
    result.push_back(temp7);
    result.push_back(temp8);
    result.push_back(temp2);

    result.push_back(temp9);
    Solution a;
    a.findWinners(result);
    return 0;
}
