#include<iostream>
#include<vector>
using namespace std;

void func(vector<int> list, vector<int> pri, int M, int a, int b)
{
    if (M == 0){
        for(int i = 0; i < pri.size(); i++)
            cout << pri[i] << " ";
        cout << endl;
    }
    else if (b == list.size()){
        return;
    }
    else{
        pri[a] = list[b];
        func(list, pri, M - 1, a + 1, b + 1);
        func(list, pri, M, a, b + 1);
    }
}

int main() {
    int N,M;
    cin >> N >> M;
        vector<int> list;
    for(int i=1; i<N+1; i++){
        list.push_back(i);
    }
    vector<int> pri(M);
    func(list, pri,M, 0, 0);
}
