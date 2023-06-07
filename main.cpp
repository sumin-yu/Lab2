#include <iostream>
#include <vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
    if (cnt == M) {
        for (int elem : vec)
            cout << elem << " ";

        cout << endl;
        return;
    }
    
    else {
        int begin;
        if (vec.empty())
            begin = 1;
        else
            begin = vec.back() + 1;
        
        for (int i = begin; i <= N; i++) {
            vec.push_back(i);
            func(cnt + 1);
            vec.pop_back();
        }
    }
}

int main() {
    cin >> N >> M;
    func(0);
}
