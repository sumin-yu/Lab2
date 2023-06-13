#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
	vec.resize(M);
    int pnt;
    if (cnt == M) {
        for (int i = 0; i < M; ++i) {
            cout << vec[i] << " ";
        }
        cout << endl;
        return;
    }
    if (cnt > 0) int pnt = vec[cnt -1] +1;
    else pnt = 1; 
    if (pnt == 0) pnt = 1;
    for (int i = pnt; i <= N; i++) {
        vec[cnt] = i;
        func(cnt + 1);  
    }
}

int main() {
   cin >> N >> M;
   func(0);
}
