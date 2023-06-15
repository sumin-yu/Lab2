#include<iostream>
#include<vector>

using namespace std;


int main() {
    int n,m;
    vector<vector<bool>> boolVec;
    cin >> n >> m;
    vector<bool> zero;
    vector<bool> one;
    zero.push_back(0);
    one.push_back(1);
    boolVec.push_back(zero);
    boolVec.push_back(one);
    for (int k = 0; k < n - 1; k++){
        int cnt = (int)boolVec.size();
        for (int i = 0; i < cnt; i++){
            vector<bool> truer;
            for (int j = 0; j < (int)boolVec[i].size(); j++){
                truer.push_back(boolVec[i][j]);
            }
            boolVec[i].push_back(0);
            truer.push_back(1);
            boolVec.push_back(truer);
        }
    }
    int cnt = (int)boolVec.size();
    for (int i = 0; i < cnt; i++){
        vector<int> vec;
        for (int j = 0; j < n; j++){
            if (boolVec[i][j] == 1){
                vec.push_back(j);
            }
        }
        if ((int)vec.size() == m){
            for (int j = 0; j < (int)vec.size(); j++){
                cout << vec[j] + 1 << " ";
            }
            cout << endl;
        }
    }
}