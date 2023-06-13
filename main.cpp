#include <iostream>
#include <vector>

using namespace std;

void func(int N, int M, int start, vector<int>& vec) {
    // 수열의 길이가 M에 도달하면 출력
    if (vec.size() == M) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    // 수열에 다음 수를 추가
    for (int num = start; num <= N; num++) {
        // 이미 수열에 포함된 경우 스킵
        bool isDuplicate = false;
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] == num) {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate) {
            continue;
        }

        // 수열에 현재 수를 추가하고 다음 수를 찾기 위해 재귀 호출
        vec.push_back(num);
        func(N, M, num + 1, vec);
        vec.pop_back();
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> sequence;
    func(N, M, 1, sequence);

    return 0;
}

