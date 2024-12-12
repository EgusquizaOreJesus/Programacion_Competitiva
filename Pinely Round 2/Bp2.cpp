#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
void split(vector<int>& container,int x){
    vector<int> spliteado;
    vector<int> temp;
    for (auto n: container) {
        if (n < x){
            spliteado.push_back(n);
        }
        else{
            temp.push_back(n);
        }
    }
    for_each(temp.begin(),temp.end(),[&spliteado](int val){spliteado.push_back(val);});
    container = spliteado;
}
int sort(vector<int>& container){
    int n = 0;
    if (is_sorted(container.begin(),container.end())){
            return n;
    }else{
        for (int i = int(container.size())-1; i >= 0; --i) {
            int ai = container[i];
            for (int j = 0; j < container.size()-1; ++j) {
                int aj = container[j];
                if (ai + 1 == n){
                    break;
                }
                else if (ai + 1 == aj){
                    if (i > j){
                        split(container,aj);
                        i = -1;
                        n++;
                        break;
                    }
                }
            }
        }
        return sort(container) + 1;
    }
}
int main()
{

    {
        int n;
        cin>>n;

        vector<int> a(n);
        for(auto &e: a)
            cin>>e;

        vector<int> pos(n+1);
        for(int i=0; i<n; i++)
            pos[a[i]] = i;

        int ans = 0;

        for(int i=1; i<n; i++)
            ans += pos[i+1] < pos[i];

        cout<<ans<<"\n";
    }
}