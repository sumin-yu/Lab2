#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
    if (cnt == 0) {
        for (int i = 1; i <= M; i++)
            vec.push_back(i);
    }
    else {
        int i(0), k(1);
        while (vec[M - 1 - i] == (N - i)) i++;
        vec[M - 1 - i] += 1;
        while (k <= i) {
            vec[M - 1 - i + k] = vec[M - 1 - i] + k;
            k++;
        }
    }

    for (int elem : vec)
        cout << elem << ' ';

    if (vec[0] < (N - M + 1)) {
        cout << endl;
        func(++cnt);
    }
}

int main() {
    cin >> N >> M;
    func(0);
}
