#include <iostream>
#include <vector>

using namespace std;

void func(int N, int M, vector<int>& a, int start) {
    if (a.size() == M) {
        for (int num : a) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    for (int i = start; i <= N; ++i) {
        a.push_back(i);
        func(N, M, a, i + 1);
        a.pop_back();
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> a;
    func(N, M, a, 1);

    return 0;
}