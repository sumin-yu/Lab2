#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   if (cnt == M) {  
        for (int i = 0; i < M; i++) {
            cout << vec[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int num = 1; num <= N; num++) {
        if (!vec.empty() && vec.back() > num) continue;  

        vec.push_back(num);  
        func(cnt + 1);  
        vec.pop_back();  
    }
}

int main() {
   cin >> N >> M;
   func(0);
}
