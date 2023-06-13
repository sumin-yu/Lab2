#include<iostream>
#include<vector>

using namespace std;

void func(int cnt) {
    if (cnt == M) {
        for (int i=0; i<M-1; i++) {
            cout << vec[i] << " ";
        }
        cout << vec[M-1]<<endl;
        return;
    }

    for (int i = 1; i <= N; i++) {
        if (cnt > 0 && vec[cnt - 1] >= i) {
            continue; 
        }
        vec[cnt] = i;
        func(cnt + 1);
    }
}

int main() {
   cin >> N >> M;
   vec.resize(M);
   func(0);
   return 0;
}
