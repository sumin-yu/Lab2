#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int n, int m, int index, vector<int>& vec) {
    if(vec.size() == m){
        for(int num : vec) cout << num << " ";
        cout << endl;
        return;
    }

    for(int i = index; i <= n; i++){
        vec.push_back(i);
        func(n, m, i + 1, vec);
        vec.pop_back();
    }
}

int main() {
   cin >> N >> M;
   func(N, M, 1, vec);
   return 0;
}
