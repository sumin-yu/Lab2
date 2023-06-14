#include <iostream>
#include <vector>

using namespace std;

vector<int> vec;
int N, M;

void func(int start, int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            cout << vec[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = start; i <= N; i++) {
        vec[cnt] = i;
        func(i + 1, cnt + 1);
    }
}

int main() {
    cin >> N >> M;
    vec.resize(M);

    func(1, 0);

    return 0;
}
