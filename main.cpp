
#include <iostream>
#include <vector>
using namespace std;

int N,M,X;
vector<int> vec;

void solve(int index, int cnt) {
    if (cnt == M) {
        for (auto i : vec){
            cout << i+1;
            if(i != vec.back()){
                cout << " ";
            }
        } 
        cout << endl;
        return;
    }
    for (int i=index; i<N; i++) {
        vec.push_back(i);
        solve(i+1, cnt+1);
        vec.pop_back();
    }
}

int main() {
    cin >> N >> M;
    solve(0, 0);
    return 0;
}


