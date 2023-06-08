#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
    if(cnt==0){
        for(int i=1; i<=M; i++){
            vec.push_back(i);
        }
        cnt++;
    }
    if(cnt==M+1) {
        for(int i=N-M+1; i<=N; i++){
            cout<<i<<" ";
        }
        return;
    }
    if(vec[M-cnt]==N+1-cnt){
        func(cnt+1);
    }else{
        for(int i=0; i<M; i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
        vec[M-cnt]++;
        for(int i=M-cnt+1; i<M; i++){
            vec[i]=vec[i-1]+1;
        }
        func(1);
    }
}

int main() {
   cin >> N >> M;
   func(0);
}
