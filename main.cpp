#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;
bool check[9];

void func(int cnt) {
    if (cnt == M){
        for (int i=0; i < vec.size(); i++){
            cout << vec[i] << " ";
        }
        cout << "\n";
        return;
    }

    else{
        for (int i=1; i <= N; i++){
            if (check[i] == false){
                vec.push_back(i);
                check[i] = true;
                func(cnt + 1);
                check[i] = false;
                vec.pop_back();
            }
        }
    }
}

int main() {
   cin >> N >> M;
   func(0);
}