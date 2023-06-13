#include <iostream>
#include <vector>

using namespace std;

void make_s(int start, int N, int M, vector<int>& sequence) {
    if (sequence.size() == M) {
        for (int num : sequence) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    for (int i = start; i <= N; i++) {
        sequence.push_back(i);
        make_s(i + 1, N, M, sequence);
        sequence.pop_back();
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> sequence;
    make_s(1, N, M, sequence);

    return 0;
}

