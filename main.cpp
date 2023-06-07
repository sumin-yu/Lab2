#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;


int lists[9];
bool check[9] = { 0, };
 
void func(int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            cout << lists[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= N; i++) {
        if (!check[i]) {
            check[i] = true;
            lists[cnt] = i;
            func(cnt + 1);
            check[i] = false;
        }
    }
}


int main() {
   cin >> N >> M;
   func(0);
}
