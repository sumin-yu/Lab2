#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
    if(vec.size() < M){
        for(int i = cnt ;i<N;i++){
            vec.push_back(i+1);
            func(i+1);
            vec.pop_back();
        }
    }
    else if(vec.size() == M){
        for(int i = 0;i<vec.size() ;i++){
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}


int main() {
   cin >> N >> M;
   func(0);
}
