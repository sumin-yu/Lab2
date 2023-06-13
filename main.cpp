#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N, M;
vector<int> vec;

void func(int cnt) {
    vector<int> allNum;
    vector<bool> temp(N, false);

    for(int i = 0; i < N; i++)
        allNum.push_back(i + 1);

    for(int i = 0; i < M; i++)
        temp[i] = true;

    do {
        for(int i = 0; i < N; i++) {
            if(temp[i]) {
                cout << allNum[i] << ' ';
                cnt++;
            }
        }
        cout << endl;
    } while(prev_permutation(temp.begin(), temp.end()));

    cnt = cnt / M;
    return;
}

int main() {
    cin >> N >> M;
    func(0);
    return 0;
}
