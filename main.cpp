#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void swap(int i, int j){
    int num = vec[i];
    vec[i] = vec[j];
    vec[j] = num;
}

void func(int count) {
    if(count == M){
        for(int i = 0; i < M; i++){
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    else{
        for(int i = count; i < N; i++){
            swap(count, i);
            func(count + 1);
            swap(count, i);
        }
    }
}

int main() {
   cin >> N >> M;
   for(int i = 0; i < N; i++) vec.push_back(i + 1);
   func(0);
}
