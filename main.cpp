#include<iostream>
#include<vector>

using namespace std;

int N, M;
vector<int> vec;
int start = 1;

void func(int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++) 
            cout << vec[i] << " ";
        cout << endl;
        return;
    }
    for (int i = start; i <= N; i++) {
        vec[cnt] = i;
        start = i + 1;
        func(cnt + 1);
        start = i; 
    }
}

int main() {
    cin >> N >> M;
    vec.resize(M);
    func(0);
}