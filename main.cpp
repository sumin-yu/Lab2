#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;
int v[10] = {0, };

void dfs(int idx, int cnt) {
   vec.resize(M);
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            cout << vec[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = idx; i <= N; i++) {
        vec[cnt] = i;
        dfs(i + 1, cnt + 1);
    }
}

void func(int cnt) {
   dfs(1, 0);
}

int main() {
   cin >> N >> M;
   func(0);
}

