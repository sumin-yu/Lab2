#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
    // if the size is M, print out the vector and return
    if (vec.size() >= M){
        for (int i = 0; i < M; i++){
            cout << vec[i] << " ";
        }
        cout << endl;
        return;
    }
    // if the size is not M, add elements
    else{
        for(int i = cnt; i < N; i++){
            if (vec.empty() || vec.back() <= i){
                vec.push_back(i + 1);
                func(cnt + 1);
                vec.pop_back();
            }
        }
    }
}

int main() {
   cin >> N >> M;
   func(0);
}
