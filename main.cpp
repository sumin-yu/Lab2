#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;
bool visited[8] = {0};

void func(int cnt, int num) {
    if (cnt == M){
        for (int i = 0; i< vec.size(); i++)
            cout << vec[i] << " ";
        cout << endl;
        return;
    }
    else{
        for (int i= num; i<N; i++){
            if (!visited[i]){
                visited[i] = true;
                // cout << i << "     " << num  << endl;
                vec.push_back(i+1);
                func(cnt + 1, i + 1);
                visited[i] = false; // 그 전의 성공단계
                vec.pop_back(); // 마지막 원소 pop
            }
        } 
    }
}

int main() {
   cin >> N >> M;
   func(0, 0);
}