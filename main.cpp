#include<iostream>
#include<vector>
 
using namespace std;


int N,M;
vector<int> vec;

void recollect(vector<int> &collected, int start, int n, int m){
    if (m == 0){
        for (int i=0; i<collected.size(); i++){
            cout << collected[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i=start; i<n+1; ++i){
        collected.push_back(i);
        recollect(collected, i+1, n, m-1);
        collected.pop_back();
    }


}

void func(int n, int m) {
    recollect(vec, 1, n, m);
}

int main() {
    cin >> N >> M;
    func(N, M);

    return 0;
}
