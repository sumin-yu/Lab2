#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> vec;

//cnt = 0 <=> first num is 1
void func(int cnt, int size){

    if(size <= 0){
        for(int i=0; i<M; i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
        return ;
    }

    if(cnt+1 > N){return ;}
    for(int i = cnt+1; i<=N; i++){
        vec.push_back(i);
        func(vec.back(), size-1);
        vec.pop_back();
    }
}


int main(){
    cin>>N>>M;
    func(0, M);
}
