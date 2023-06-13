#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
if (cnt == M) {
        for (auto num : vec) {
            cout << num;
        }
        cout << ' ';
        return;
    }

    for (int i = 1; i <= N; i++) {
        if (vec.empty() || i > vec.back()) {
            vec.push_back(i);
            func(cnt + 1);
            vec.pop_back();
        }
    }






}

int main() {
   cin >> N >> M;
   func(0);
}
