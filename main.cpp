#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> vec;
vector<bool> check;

void func(int cnt) {
    if (cnt == M) {
        for (int num : vec) {
            cout << num << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; i++) {
        if (!check[i] && (cnt == 0 || vec[cnt - 1] < i)) {
            check[i] = true;
            vec[cnt] = i;
            func(cnt + 1);
            check[i] = false;
        }
    }
}

int main() {
    cin >> N >> M;
    vec.resize(M);
    check.resize(N + 1, false);
    func(0);

    return 0;
}
