#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
    int first_num;
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            cout << vec[i] << " ";
        }
        cout << endl;
        return;
    }     
    if(vec.size()==0) first_num=1;
    else first_num=vec.back()+1;
    for (int i = first_num; i <= N; i++) {
        vec.push_back(i);
        func(cnt + 1);
        vec.pop_back();
    }
};

int main(){
   cin>>N>>M;
   func(0);
}







}

int main() {
   cin >> N >> M;
   func(0);
}
