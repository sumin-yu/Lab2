#include<iostream>
#include<vector>
#include<map>
using namespace std;

void func(int N, int M) {
    map<int,int> list;
    for(int i=0; i<M; i++){
        while(1){
            int n=rand()%N;
            if(list.count(n)==0){  
                list.insert({n,1});
                break;
            }
        }
    }
    for(auto i : list){
        cout<<i.first<<" ";
    }
}

int main() {
    int N,M;
    cin >> N >> M;
    func(N,M);
}
