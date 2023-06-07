#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N,M;
vector<int> vec, index;

void func(int cnt) {
    vec.resize(N);
    index.resize(N);
    for (int i=0; i<N; i++)
        vec[i] = i+1;
    for (int i=M; i<N; i++)
        index[i] = 1;
    do {
        for (int i=0; i<index.size(); i++) {
            if (index[i]!=1)
                cout << vec[i] << " ";
        }
    cout << endl;
    } while(next_permutation(index.begin(), index.end()));
}

int main() {
   cin >> N >> M;
   func(0);
}