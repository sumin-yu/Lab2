#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> vec;
vector<bool> visited;

void func(int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++) 
            cout << vec[i] << ' ';
        
        cout << endl;
        return;
    }

    for (int i = 1; i <= N; i++) {
        if (visited[i] == false) 
        {
            visited[i] = true;
            vec[cnt] = i;
            
            func(cnt + 1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> N >> M;
    vec.resize(M);
    visited.resize(N + 1, false);
    func(0);

    return 0;
}
