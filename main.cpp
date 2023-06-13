#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;
int point;

void func(int cnt) {
    if (cnt == M){
        for (auto it : vec)
            cout << it << ' ';
        
        cout << endl;
        return;
    }

    if (vec.empty()){
        point = 1;
    }
    else{
        point = vec.back()+1;
    }

    for (int ind=point; ind<=N; ind++){
        vec.push_back(ind);
        func(cnt+1);
        vec.pop_back();
    }

}

int main() {
   cin >> N >> M;
   func(0);
}
