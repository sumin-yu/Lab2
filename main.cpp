#include<iostream>
#include<vector>

using namespace std;

int N, M;
vector<int> vec(0);

void func(int cnt) {

    if (cnt == M) {
        for (auto it : vec) {
            cout << it;
        }
        cout << endl;
        return;
    }

    else {
        for (int i = 1; i < N + 1; i++) {
            if (vec.empty() || i > vec.back()) {
                vec.push_back(i);
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
