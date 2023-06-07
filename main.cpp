#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   if (cnt == M) {  // 수열의 길이가 M이면 출력
        for (int i = 0; i < M; i++) {
            cout << vec[i] << ' ';
        }
        cout << endl;
        return;
    }

    int start = (cnt == 0) ? 1 : vec[cnt - 1] + 1;  // 오름차순을 유지하기 위해 시작 숫자를 결정

    for (int i = start; i <= N; i++) {
        vec[cnt] = i;  // 현재 자리에 i를 선택
        func(cnt + 1);  // 다음 자리를 선택하기 위해 재귀 호출
    }
}

int main() {
   cin >> N >> M;
   func(0);
}
