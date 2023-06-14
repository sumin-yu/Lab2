#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> vec;

void func(int cnt) {
    if (cnt == M) {
        
        for (int i = 0; i < M; i++) {
            cout << vec[i] ;
            if (i != M-1){
                cout << " ";
            }
        }
        cout << '\n';
        return;
    }

   
    int start = (cnt == 0) ? 1 : vec[cnt - 1] + 1;

    for (int i = start; i <= N - M + cnt + 1; i++) {
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