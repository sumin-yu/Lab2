#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;
int c=0;

void func(int cnt) {

    if(c<M && cnt==N) return;
    
    if(c==M) {
        for(int i=0;i<M;i++) cout<<vec[i]<<" ";
        cout<<endl;
        return;
    }

    for(int i=cnt+1;i<=N;i++) {
        vec.push_back(i);
        c++;
        func(i);
        vec.pop_back();
        c--;
    }

}

int main() {
   cin >> N >> M;
   func(0);
}
