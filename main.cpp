#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> vec;
vector<bool> visited;
void func(int num, int cnt){//num contains where to start search
    if(cnt == M){
        for(int i = 0 ; i< M ;i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i = num ; i<=N; i++){
        if(visited[i]==false){
            visited[i]=true;
            vec[cnt] = i;
            func(i+1, cnt+1);
            visited[i]=false;
        }
    }
}

int main(){
    cin >> N >> M;
    visited = vector<bool> (N,false);
    vec = vector<int> (M, 0);
    func(1, 0);
}
