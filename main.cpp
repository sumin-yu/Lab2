#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> v;

void f(int cnt, int start) {
    
    if (cnt == M) {
        for (int i=0;i<v.size();i++) {
            cout << v[i] << ' ';
        }
        cout << '\n';
        return;
    }

    
    for (int num = start; num <= N; num++) {
        v.push_back(num);
        f(cnt + 1, num + 1);        
        v.pop_back();
    }
}

int main() {
    cin >> N >> M;

    f(0, 1);

    return 0;
}
